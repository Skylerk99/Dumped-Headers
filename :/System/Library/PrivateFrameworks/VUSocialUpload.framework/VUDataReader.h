/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, April 19, 2016 at 11:55:37 AM Mountain Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/VUSocialUpload.framework/VUSocialUpload
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <VUSocialUpload/VUSocialUpload-Structs.h>
@class NSFileHandle, NSURL;

@interface VUDataReader : NSObject {

	NSFileHandle* _readHandle;
	NSURL* _URL;

}

@property (nonatomic,retain) NSFileHandle * readHandle;              //@synthesize readHandle=_readHandle - In the implementation block
@property (nonatomic,retain) NSURL * URL;                            //@synthesize URL=_URL - In the implementation block
+(id)dataReaderWithURL:(id)arg1 error:(id*)arg2 ;
-(void)dealloc;
-(unsigned long long)length;
-(NSURL *)URL;
-(void)setURL:(NSURL *)arg1 ;
-(BOOL)_openFileIfNeededWithError:(id*)arg1 ;
-(id)dataWithRange:(NSRange)arg1 ;
-(NSFileHandle *)readHandle;
-(void)setReadHandle:(NSFileHandle *)arg1 ;
@end

