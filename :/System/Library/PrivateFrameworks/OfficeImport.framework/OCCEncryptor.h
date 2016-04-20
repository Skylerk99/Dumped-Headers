/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, April 19, 2016 at 11:53:43 AM Mountain Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <OfficeImport/OfficeImport-Structs.h>
@class NSString;

@interface OCCEncryptor : NSObject {

	NSString* mOutputFilename;
	OCCStreamer* mStreamer;

}

@property (nonatomic,readonly) NSString * outputFilename; 
+(id)allocTempFileWithBase:(id)arg1 filename:(id*)arg2 ;
-(void)dealloc;
-(BOOL)encryptIntoOutputFile;
-(id)initWithStreamer:(OCCStreamer*)arg1 ;
-(BOOL)encrypt;
-(NSString *)outputFilename;
@end

