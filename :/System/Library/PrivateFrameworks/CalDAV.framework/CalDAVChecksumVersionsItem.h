/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, April 19, 2016 at 11:50:18 AM Mountain Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/CalDAV.framework/CalDAV
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CoreDAV/CoreDAVItem.h>

@class NSMutableSet;

@interface CalDAVChecksumVersionsItem : CoreDAVItem {

	NSMutableSet* _versionStringsSupported;

}
-(id)init;
-(id)copyParseRules;
-(BOOL)supportsVersion:(id)arg1 ;
-(void)addVersionSupported:(id)arg1 ;
@end

