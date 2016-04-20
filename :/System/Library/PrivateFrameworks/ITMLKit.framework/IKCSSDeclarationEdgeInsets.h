/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, April 19, 2016 at 11:52:52 AM Mountain Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/ITMLKit.framework/ITMLKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <ITMLKit/ITMLKit-Structs.h>
#import <ITMLKit/IKCSSDeclaration.h>

@interface IKCSSDeclarationEdgeInsets : IKCSSDeclaration {

	BOOL _insetsFound;
	UIEdgeInsets _insets;

}

@property (assign) UIEdgeInsets insets;              //@synthesize insets=_insets - In the implementation block
@property (assign) BOOL insetsFound;                 //@synthesize insetsFound=_insetsFound - In the implementation block
-(id)description;
-(id)stringValue;
-(UIEdgeInsets)insets;
-(void)setInsets:(UIEdgeInsets)arg1 ;
-(id)initWithParseDeclaration:(id)arg1 info:(id)arg2 ;
-(BOOL)insetsFound;
-(void)setInsetsFound:(BOOL)arg1 ;
@end

