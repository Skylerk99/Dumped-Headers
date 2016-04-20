/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, April 19, 2016 at 11:48:14 AM Mountain Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/Frameworks/NotificationCenter.framework/NotificationCenter
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/NCDatum.h>

@class NSString, BBBulletin;

@interface NCSnippetDatum : NSObject <NCDatum> {

	BBBulletin* _representedBulletin;

}

@property (nonatomic,readonly) BBBulletin * representedBulletin;              //@synthesize representedBulletin=_representedBulletin - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,copy,readonly) NSString * datumIdentifier; 
-(id)initWithBulletin:(id)arg1 ;
-(BBBulletin *)representedBulletin;
-(NSString *)datumIdentifier;
-(void)dealloc;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(NSString *)description;
@end

