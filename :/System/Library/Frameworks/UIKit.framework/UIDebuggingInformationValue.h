/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, April 19, 2016 at 11:49:03 AM Mountain Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/Frameworks/UIKit.framework/UIKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString, NSValue;

@interface UIDebuggingInformationValue : NSObject {

	NSString* _key;
	long long _type;
	NSValue* _defaultValue;
	NSValue* _minimumValue;
	NSValue* _maximumValue;

}

@property (nonatomic,copy) NSString * key;                        //@synthesize key=_key - In the implementation block
@property (assign,nonatomic) long long type;                      //@synthesize type=_type - In the implementation block
@property (nonatomic,retain) NSValue * defaultValue;              //@synthesize defaultValue=_defaultValue - In the implementation block
@property (nonatomic,retain) NSValue * minimumValue;              //@synthesize minimumValue=_minimumValue - In the implementation block
@property (nonatomic,retain) NSValue * maximumValue;              //@synthesize maximumValue=_maximumValue - In the implementation block
-(NSString *)key;
-(void)setType:(long long)arg1 ;
-(long long)type;
-(NSValue *)minimumValue;
-(NSValue *)maximumValue;
-(void)setMinimumValue:(NSValue *)arg1 ;
-(void)setMaximumValue:(NSValue *)arg1 ;
-(void)setKey:(NSString *)arg1 ;
-(NSValue *)defaultValue;
-(void)setDefaultValue:(NSValue *)arg1 ;
@end

