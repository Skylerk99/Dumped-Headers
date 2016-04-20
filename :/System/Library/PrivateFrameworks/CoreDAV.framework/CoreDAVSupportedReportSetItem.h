/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, April 19, 2016 at 11:51:00 AM Mountain Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/CoreDAV.framework/CoreDAV
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CoreDAV/CoreDAVItem.h>

@class NSMutableSet;

@interface CoreDAVSupportedReportSetItem : CoreDAVItem {

	NSMutableSet* _supportedReports;

}

@property (nonatomic,retain) NSMutableSet * supportedReports;              //@synthesize supportedReports=_supportedReports - In the implementation block
+(id)copyParseRules;
-(void)dealloc;
-(id)init;
-(id)description;
-(BOOL)supportsReportWithNameSpace:(id)arg1 andName:(id)arg2 ;
-(NSMutableSet *)supportedReports;
-(void)addSupportedReport:(id)arg1 ;
-(void)setSupportedReports:(NSMutableSet *)arg1 ;
@end

