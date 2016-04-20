/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, April 19, 2016 at 11:46:57 AM Mountain Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/Frameworks/CFNetwork.framework/CFNetwork
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CFNetwork/CFNetwork-Structs.h>
#import <libobjc.A.dylib/NSURLDownloadDecoder.h>

@class NSString;

@interface NSGZipDecoder : NSObject <NSURLDownloadDecoder> {

	z_stream_s* _stream;
	unsigned long long _modificationTime;
	NSString* _filename;
	BOOL _streamInitialized;
	BOOL _decodedHeader;
	BOOL _finishedInflating;
	BOOL _pad;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(BOOL)decodeDownloadHeader:(id)arg1 headerLength:(int*)arg2 modificationTime:(unsigned long long*)arg3 filename:(id*)arg4 ;
+(BOOL)canDecodeDownloadHeaderData:(id)arg1 ;
+(id)MIMEType;
-(id)decodeData:(id)arg1 ;
-(BOOL)isFinishedDecoding;
-(id)filenameWithOriginalFilename:(id)arg1 ;
-(BOOL)decodeDownloadData:(id)arg1 dataForkData:(id*)arg2 resourceForkData:(id*)arg3 ;
-(BOOL)finishDownloadDecoding;
-(void)dealloc;
-(id)init;
-(id)fileAttributes;
-(void)finalize;
@end

