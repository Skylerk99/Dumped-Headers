/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, April 19, 2016 at 11:53:40 AM Mountain Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <OfficeImport/OADTextRun.h>

@class NSString, OADParagraphProperties;

@interface OADTextField : OADTextRun {

	NSString* mText;
	OADParagraphProperties* mParagraphProperties;

}
-(void)dealloc;
-(id)init;
-(BOOL)isEmpty;
-(id)text;
-(void)setText:(id)arg1 ;
-(id)paragraphProperties;
-(void)removeUnnecessaryOverrides;
-(unsigned long long)characterCount;
@end

