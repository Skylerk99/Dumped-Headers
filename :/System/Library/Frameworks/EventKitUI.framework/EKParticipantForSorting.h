/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, April 19, 2016 at 11:47:31 AM Mountain Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/Frameworks/EventKitUI.framework/EventKitUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class EKParticipant, NSString;

@interface EKParticipantForSorting : NSObject {

	EKParticipant* _participant;
	BOOL _isEmail;
	NSString* _firstName;
	NSString* _lastName;
	NSString* _cachedDisplayName;

}
-(id)participant;
-(id)initWithEKParticipant:(id)arg1 ;
-(id)firstName;
-(id)lastName;
-(id)description;
-(long long)compare:(id)arg1 ;
-(id)displayName;
-(BOOL)isEmail;
@end

