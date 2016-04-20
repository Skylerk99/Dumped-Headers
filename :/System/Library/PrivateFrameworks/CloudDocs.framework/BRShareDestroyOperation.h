/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, April 19, 2016 at 11:50:41 AM Mountain Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/CloudDocs.framework/CloudDocs
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CloudDocs/BROperation.h>

@class CKShare;

@interface BRShareDestroyOperation : BROperation {

	CKShare* _share;
	/*^block*/id _shareDestroyCompletionBlock;

}

@property (copy) id shareDestroyCompletionBlock;              //@synthesize shareDestroyCompletionBlock=_shareDestroyCompletionBlock - In the implementation block
@property (nonatomic,retain) CKShare * share;                 //@synthesize share=_share - In the implementation block
-(void)finishWithResult:(id)arg1 error:(id)arg2 ;
-(void)dealloc;
-(void)main;
-(void)setShareDestroyCompletionBlock:(id)arg1 ;
-(id)shareDestroyCompletionBlock;
-(void)setShare:(CKShare *)arg1 ;
-(CKShare *)share;
-(id)initWithShare:(id)arg1 ;
@end

