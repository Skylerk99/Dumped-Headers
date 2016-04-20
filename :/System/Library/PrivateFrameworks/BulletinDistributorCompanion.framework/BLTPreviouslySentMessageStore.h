/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, April 19, 2016 at 11:50:16 AM Mountain Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/BulletinDistributorCompanion.framework/BulletinDistributorCompanion
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_queue, OS_dispatch_source;
@class NSMutableDictionary, NSObject, NSString;

@interface BLTPreviouslySentMessageStore : NSObject {

	NSMutableDictionary* _messageDigests;
	NSObject*<OS_dispatch_queue> _queue;
	NSObject*<OS_dispatch_source> _saveTimer;
	NSString* _path;
	BOOL _dirty;

}

@property (assign,nonatomic) BOOL dirty;              //@synthesize dirty=_dirty - In the implementation block
-(void)dealloc;
-(void)invalidate;
-(void)clear;
-(void)setDirty:(BOOL)arg1 ;
-(BOOL)dirty;
-(void)_save;
-(id)initWithMessageStorePath:(id)arg1 ;
-(id)messageDigestForUnsentMessage:(id)arg1 messageKey:(id)arg2 ;
-(void)recordMessageDigestAsPreviouslySent:(id)arg1 messageKey:(id)arg2 ;
-(void)_cancelSave;
-(void)_enqueueSave;
@end

