/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, April 19, 2016 at 11:49:19 AM Mountain Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/Frameworks/WatchKit.framework/WatchKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <WatchKit/WatchKit-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class UIImage, NSData, NSString;

@interface WKImage : NSObject <NSCopying, NSSecureCoding> {

	UIImage* _image;
	NSData* _imageData;
	NSString* _imageName;

}

@property (retain) UIImage * image;                   //@synthesize image=_image - In the implementation block
@property (retain) NSData * imageData;                //@synthesize imageData=_imageData - In the implementation block
@property (retain) NSString * imageName;              //@synthesize imageName=_imageName - In the implementation block
+(BOOL)supportsSecureCoding;
+(id)imageWithImageData:(id)arg1 ;
+(id)imageWithImageName:(id)arg1 ;
+(id)imageWithImage:(id)arg1 ;
-(NSData *)imageData;
-(void)setImage:(UIImage *)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)init;
-(id)_init;
-(id)copyWithZone:(NSZone*)arg1 ;
-(UIImage *)image;
-(void)setImageData:(NSData *)arg1 ;
-(NSString *)imageName;
-(void)setImageName:(NSString *)arg1 ;
@end

