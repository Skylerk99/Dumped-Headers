/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, April 19, 2016 at 11:50:14 AM Mountain Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/BulletinBoard.framework/BulletinBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <BulletinBoard/BulletinBoard-Structs.h>
#import <libobjc.A.dylib/BBUniquableObject.h>
#import <libobjc.A.dylib/NSSecureCoding.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString, BBColor, BBImage;

@interface BBAppearance : NSObject <BBUniquableObject, NSSecureCoding, NSCopying> {

	NSString* _title;
	BBColor* _titleColor;
	BBImage* _image;
	BBColor* _color;
	long long _style;
	NSString* _viewClassName;

}

@property (nonatomic,copy) NSString * title;                        //@synthesize title=_title - In the implementation block
@property (nonatomic,copy) BBColor * titleColor;                    //@synthesize titleColor=_titleColor - In the implementation block
@property (nonatomic,copy) BBImage * image;                         //@synthesize image=_image - In the implementation block
@property (nonatomic,copy) BBColor * color;                         //@synthesize color=_color - In the implementation block
@property (assign,nonatomic) long long style;                       //@synthesize style=_style - In the implementation block
@property (nonatomic,copy) NSString * viewClassName;                //@synthesize viewClassName=_viewClassName - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(BOOL)supportsSecureCoding;
+(id)appearanceWithTitle:(id)arg1 ;
-(void)setImage:(BBImage *)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(void)dealloc;
-(void)setTitle:(NSString *)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(NSString *)title;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BBImage *)image;
-(long long)style;
-(void)setStyle:(long long)arg1 ;
-(BBColor *)color;
-(void)setColor:(BBColor *)arg1 ;
-(void)setTitleColor:(BBColor *)arg1 ;
-(BBColor *)titleColor;
-(id)uniqueIdentifier;
-(NSString *)viewClassName;
-(void)setViewClassName:(NSString *)arg1 ;
@end

