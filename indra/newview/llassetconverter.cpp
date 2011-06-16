// <edit>
#include "llviewerprecompiledheaders.h"
#include "llassetconverter.h"
#include "llviewerimagelist.h"
#include "vorbisencode.h"
#include "llbvhloader.h"
// static
LLAssetType::EType LLAssetConverter::convert(std::string src_filename, std::string filename)
{
	std::string exten = gDirUtilp->getExtension(src_filename);
	LLAssetType::EType asset_type = LLAssetType::AT_NONE;
	if (exten.empty())
		return LLAssetType::AT_NONE;
	else if(exten == "bmp")
	{
		asset_type = LLAssetType::AT_TEXTURE;
		if (!LLViewerImageList::createUploadFile(src_filename,
												 filename,
												 IMG_CODEC_BMP ))
		{
			return LLAssetType::AT_NONE;
		}
	}
	else if( exten == "tga")
	{
		asset_type = LLAssetType::AT_TEXTURE;
		if (!LLViewerImageList::createUploadFile(src_filename,
												 filename,
												 IMG_CODEC_TGA ))
		{
			return LLAssetType::AT_NONE;
		}
	}
	else if( exten == "jpg" || exten == "jpeg")
	{
		asset_type = LLAssetType::AT_TEXTURE;
		if (!LLViewerImageList::createUploadFile(src_filename,
												 filename,
												 IMG_CODEC_JPEG ))
		{
			return LLAssetType::AT_NONE;
		}
	}
 	else if( exten == "png")
 	{
 		asset_type = LLAssetType::AT_TEXTURE;
 		if (!LLViewerImageList::createUploadFile(src_filename,
 												 filename,
 												 IMG_CODEC_PNG ))
 		{
 			return LLAssetType::AT_NONE;
 		}
 	}
	else if(exten == "wav")
	{
		asset_type = LLAssetType::AT_SOUND;
		if(encode_vorbis_file(src_filename, filename) != LLVORBISENC_NOERR)
		{
			return LLAssetType::AT_NONE;
		}
	}
	else if(exten == "ogg")
	{
		asset_type = LLAssetType::AT_SOUND;
		if(!copyFile(src_filename, filename))
		{
			return LLAssetType::AT_NONE;
		}
	}
	//else if(exten == "tmp") FIXME
	else if (exten == "bvh")
	{
		asset_type = LLAssetType::AT_ANIMATION;
		S32 file_size;
		apr_file_t* fp = ll_apr_file_open(src_filename, LL_APR_RB, &file_size);
		if(!fp) return LLAssetType::AT_NONE;
		char* file_buffer = new char[file_size + 1];
		if(!ll_apr_file_read(fp, file_buffer, file_size))
		{
			apr_file_close(fp);
			delete[] file_buffer;
			return LLAssetType::AT_NONE;
		}
		LLBVHLoader* loaderp = new LLBVHLoader(file_buffer);
		if(!loaderp->isInitialized())
		{
			apr_file_close(fp);
			delete[] file_buffer;
			return LLAssetType::AT_NONE;
		}
		S32 buffer_size = loaderp->getOutputSize();
		U8* buffer = new U8[buffer_size];
		LLDataPackerBinaryBuffer dp(buffer, buffer_size);
		loaderp->serialize(dp);
		apr_file_t* apr_file = ll_apr_file_open(filename, LL_APR_WB);
		ll_apr_file_write(apr_file, buffer, buffer_size);
		delete[] file_buffer;
		delete[] buffer;
		apr_file_close(fp);
		apr_file_close(apr_file);
	}
	else if (exten == "animatn")
	{
		asset_type = LLAssetType::AT_ANIMATION;
		if(!copyFile(src_filename, filename))
		{
			return LLAssetType::AT_NONE;
		}
	}
	else if(exten == "jp2" || exten == "j2k" || exten == "j2c")
	{
		asset_type = LLAssetType::AT_TEXTURE;
		if(!copyFile(src_filename, filename))
		{
			return LLAssetType::AT_NONE;
		}
	}
	else if(exten == "gesture")
	{
		asset_type = LLAssetType::AT_GESTURE;
		if(!copyFile(src_filename, filename))
		{
			return LLAssetType::AT_NONE;
		}
	}
	else if(exten == "notecard")
	{
		asset_type = LLAssetType::AT_NOTECARD;
		if(!copyFile(src_filename, filename))
		{
			return LLAssetType::AT_NONE;
		}
	}
	else if(exten == "lsl")
	{
		asset_type = LLAssetType::AT_LSL_TEXT;
		if(!copyFile(src_filename, filename))
		{
			return LLAssetType::AT_NONE;
		}
	}
	else if(exten == "eyes" || exten == "gloves" || exten == "hair" || exten == "jacket" || exten == "pants" || exten == "shape" || exten == "shirt" || exten == "shoes" || exten == "skin" || exten == "skirt" || exten == "socks" || exten == "underpants" || exten == "undershirt" || exten == "bodypart" || exten == "clothing")
	{
		asset_type = LLAssetType::AT_CLOTHING;
		if(!copyFile(src_filename, filename))
		{
			return LLAssetType::AT_NONE;
		}
	}
	else
	{
		llwarns << "Unhandled extension" << llendl;
		return LLAssetType::AT_NONE;
	}
	return asset_type;
}
BOOL LLAssetConverter::copyFile(std::string src_filename, std::string dst_filename)
{
	S32 src_size;
	apr_file_t* src_fp = ll_apr_file_open(src_filename, LL_APR_RB, &src_size);
	if(!src_fp) return FALSE;
	apr_file_t* dst_fp = ll_apr_file_open(dst_filename, LL_APR_WB);
	if(!dst_fp) return FALSE;
	char* buffer = new char[src_size + 1];
	ll_apr_file_read(src_fp, buffer, src_size);
	ll_apr_file_write(dst_fp, buffer, src_size);
	apr_file_close(src_fp);
	apr_file_close(dst_fp);
	delete[] buffer;
	return TRUE;
}
// </edit>
