/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, April 19, 2016 at 11:50:41 AM Mountain Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/CloudDocs.framework/CloudDocs
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CloudDocs/BROperation.h>

@class NSURL;

@interface BRShareCopyOperation : BROperation {

	NSURL* _url;
	/*^block*/id _shareCopyCompletionBlock;

}

@property (copy) id shareCopyCompletionBlock;              //@synthesize shareCopyCompletionBlock=_shareCopyCompletionBlock - In the implementation block
@property (nonatomic,retain) NSURL * url;                  //@synthesize url=_url - In the implementation block
-(void)finishWithResult:(id)arg1 error:(id)arg2 ;
-(void)dealloc;
-(NSURL *)url;
-(void)setUrl:(NSURL *)arg1 ;
-(id)initWithURL:(id)arg1 ;
-(void)main;
-(id)shareCopyCompletionBlock;
-(void)setShareCopyCompletionBlock:(id)arg1 ;
@end

