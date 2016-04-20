/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, April 19, 2016 at 11:50:37 AM Mountain Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString, UIFont, NSArray;

@interface CKPhoneNumberCompressor : NSObject {

	NSString* _phoneNumber;
	UIFont* _font;
	double _desiredWidth;
	NSArray* _preferredCompressions;

}

@property (nonatomic,copy) NSString * phoneNumber;                       //@synthesize phoneNumber=_phoneNumber - In the implementation block
@property (nonatomic,retain) UIFont * font;                              //@synthesize font=_font - In the implementation block
@property (assign,nonatomic) double desiredWidth;                        //@synthesize desiredWidth=_desiredWidth - In the implementation block
@property (nonatomic,copy) NSArray * preferredCompressions;              //@synthesize preferredCompressions=_preferredCompressions - In the implementation block
-(void)dealloc;
-(void)setFont:(UIFont *)arg1 ;
-(UIFont *)font;
-(NSString *)phoneNumber;
-(id)_compressPhoneNumberIfFitsInCompressionLevel:(int)arg1 ;
-(NSArray *)preferredCompressions;
-(id)compress;
-(double)desiredWidth;
-(void)setDesiredWidth:(double)arg1 ;
-(void)setPreferredCompressions:(NSArray *)arg1 ;
-(void)setPhoneNumber:(NSString *)arg1 ;
@end

