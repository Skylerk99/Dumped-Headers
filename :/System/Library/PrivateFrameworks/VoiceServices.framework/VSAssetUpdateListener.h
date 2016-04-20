/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, April 19, 2016 at 11:55:50 AM Mountain Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/VoiceServices.framework/VoiceServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class PCPersistentTimer;

@interface VSAssetUpdateListener : NSObject {

	BOOL _isListening;
	PCPersistentTimer* _assetCleanupTimer;

}
+(id)sharedListener;
-(id)_initShared;
-(void)dealloc;
-(id)init;
-(void)startListening;
-(void)stopListening;
-(void)_spokenLanguageChanged:(id)arg1 ;
-(void)_cleanupAssets;
-(void)_scheduleNextCleanupForDate:(id)arg1 ;
-(void)_rescheduleAssetCleanup;
-(void)_flushLanguageChanges;
-(void)_cancelAssetCleanupTimer;
-(void)_updateNextCleanupDate;
-(void)downloadAssetForLanguage:(id)arg1 ;
-(id)downloadingAssetLanguage;
-(int)assetStatusForLanguage:(id)arg1 ;
-(BOOL)assetDownloadStatus:(id)arg1 progress:(float*)arg2 size:(long long*)arg3 ;
-(void)removeAssetForLanguage:(id)arg1 ;
@end

