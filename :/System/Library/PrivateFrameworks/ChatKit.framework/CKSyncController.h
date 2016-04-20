/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, April 19, 2016 at 11:50:40 AM Mountain Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@interface CKSyncController : NSObject {

	int _restoreStateChangedToken;
	int _attachmentRestoredToken;
	BOOL _restoring;

}

@property (assign,getter=isRestoring,nonatomic) BOOL restoring;              //@synthesize restoring=_restoring - In the implementation block
+(id)sharedInstance;
-(id)init;
-(BOOL)isRestoring;
-(void)prioritizeAttachmentAtPath:(id)arg1 ;
-(void)attachmentRestored;
-(void)updateRestoreState;
-(void)setRestoring:(BOOL)arg1 ;
-(void)postAttachmentRestored;
@end

