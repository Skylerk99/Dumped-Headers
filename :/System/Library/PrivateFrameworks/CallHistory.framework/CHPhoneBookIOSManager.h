/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, April 19, 2016 at 11:50:22 AM Mountain Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/CallHistory.framework/CallHistory
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/CHPhoneBookManagerProtocol.h>

@class NSString;

@interface CHPhoneBookIOSManager : NSObject <CHPhoneBookManagerProtocol>

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)get;
-(id)getRecordId:(id)arg1 andISOCountryCode:(id)arg2 isEmail:(BOOL)arg3 ;
-(id)getPersonsNameForRecord:(void*)arg1 ;
-(id)getLocalizedCallerIdLabelForRecord:(void*)arg1 withMultiValueId:(id)arg2 withCallerIdIsEmail:(BOOL)arg3 ;
-(id)fetchABRecord:(id)arg1 andISOCountryCode:(id)arg2 isEmail:(BOOL)arg3 ;
-(BOOL)isABContactASuggestion;
@end

