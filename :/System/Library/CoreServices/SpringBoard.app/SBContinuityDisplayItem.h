/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, April 19, 2016 at 11:46:20 AM Mountain Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/CoreServices/SpringBoard.app/SpringBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SpringBoard/SpringBoard-Structs.h>
#import <SpringBoard/SBDisplayItem.h>

@class SBBestAppSuggestion;

@interface SBContinuityDisplayItem : SBDisplayItem {

	SBBestAppSuggestion* _appSuggestion;

}

@property (nonatomic,retain,readonly) SBBestAppSuggestion * appSuggestion;              //@synthesize appSuggestion=_appSuggestion - In the implementation block
-(id)initWithType:(id)arg1 displayIdentifier:(id)arg2 ;
-(id)initWithType:(NSString*)arg1 displayIdentifier:(id)arg2 appSuggestion:(id)arg3 ;
-(SBBestAppSuggestion *)appSuggestion;
-(void)dealloc;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
@end

