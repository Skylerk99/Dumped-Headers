/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, April 19, 2016 at 11:56:20 AM Mountain Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <iWorkImport/iWorkImport-Structs.h>
#import <iWorkImport/GQPProcessor.h>

@interface GQPBGProcessor : GQPProcessor {

	Class mGenerator;

}
-(BOOL)go;
-(id)initWithURL:(CFURLRef)arg1 indexFileName:(id)arg2 outputType:(int)arg3 outputPath:(CFStringRef)arg4 previewRequest:(QLPreviewRequestRef)arg5 progressiveHelper:(id)arg6 generator:(Class)arg7 zipArchive:(id)arg8 cryptoKey:(id)arg9 ;
-(id)initWithURL:(CFURLRef)arg1 zipArchive:(id)arg2 indexFileName:(id)arg3 outputType:(int)arg4 outputPath:(CFStringRef)arg5 previewRequest:(QLPreviewRequestRef)arg6 progressiveHelper:(id)arg7 generator:(Class)arg8 cryptoKey:(id)arg9 ;
-(void)pushInitialState;
-(Class)generator;
@end

