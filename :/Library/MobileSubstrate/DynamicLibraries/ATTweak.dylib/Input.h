/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, April 19, 2016 at 11:45:20 AM Mountain Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /Library/MobileSubstrate/DynamicLibraries/ATTweak.dylib
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString, UITextField;

@interface Input : NSObject {

	NSString* _title;
	NSString* _key;
	NSString* _value;
	UITextField* _controlView;

}

@property (nonatomic,retain) NSString * title;                       //@synthesize title=_title - In the implementation block
@property (nonatomic,retain) NSString * key;                         //@synthesize key=_key - In the implementation block
@property (nonatomic,retain) NSString * value;                       //@synthesize value=_value - In the implementation block
@property (nonatomic,retain) UITextField * controlView;              //@synthesize controlView=_controlView - In the implementation block
-(void)setControlView:(UITextField *)arg1 ;
-(void)setTitle:(NSString *)arg1 ;
-(NSString *)key;
-(NSString *)title;
-(NSString *)value;
-(void)setValue:(NSString *)arg1 ;
-(UITextField *)controlView;
-(void)setKey:(NSString *)arg1 ;
@end

