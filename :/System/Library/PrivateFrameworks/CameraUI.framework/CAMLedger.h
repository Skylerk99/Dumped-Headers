/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, April 19, 2016 at 11:50:26 AM Mountain Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/CameraUI.framework/CameraUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <CameraUI/CameraUI-Structs.h>
@interface CAMLedger : NSObject {

	ledger_entry_info* _ledgerEntries;
	long long _ledgerCount;
	int _footprintLedgerIndex;

}
+(id)sharedInstance;
-(void)dealloc;
-(id)init;
-(long long)footprint;
@end

