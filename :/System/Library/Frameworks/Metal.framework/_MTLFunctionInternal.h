/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, April 19, 2016 at 11:48:07 AM Mountain Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/Frameworks/Metal.framework/Metal
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Metal/Metal-Structs.h>
#import <Metal/_MTLFunction.h>

@class NSString;

@interface _MTLFunctionInternal : _MTLFunction {

	MTLFunctionData _functionData;
	unsigned char _vertexAttributesInitialized;
	unsigned char _privateMetadataInitialized;
	MTLProgramObject* _programObject;
	NSString* _filePath;
	long long _lineNumber;

}
-(long long)lineNumber;
-(unsigned long long)bitCodeOffset;
-(id)initWithName:(id)arg1 type:(unsigned long long)arg2 libraryData:(MTLLibraryData*)arg3 functionData:(MTLFunctionData*)arg4 device:(id)arg5 ;
-(void)setLineNumber:(long long)arg1 ;
-(id)vertexAttributes;
-(void)initializePrivateMetadata;
-(MTLProgramObject*)programObject;
-(const MTLFunctionData*)functionData;
-(void)dealloc;
-(void)setFilePath:(id)arg1 ;
-(id)filePath;
@end

