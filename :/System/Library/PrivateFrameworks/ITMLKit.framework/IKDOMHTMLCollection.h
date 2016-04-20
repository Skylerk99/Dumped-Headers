/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, April 19, 2016 at 11:52:52 AM Mountain Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/ITMLKit.framework/ITMLKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <ITMLKit/IKJSObject.h>
#import <libobjc.A.dylib/IKJSDOMHTMLCollection.h>

@class IKDOMNode;

@interface IKDOMHTMLCollection : IKJSObject <IKJSDOMHTMLCollection> {

	IKDOMNode* _parentNode;

}

@property (assign,nonatomic,__weak) IKDOMNode * parentNode;              //@synthesize parentNode=_parentNode - In the implementation block
@property (readonly) unsigned long long length; 
-(unsigned long long)length;
-(IKDOMNode *)parentNode;
-(id)item:(unsigned long long)arg1 ;
-(id)initWithAppContext:(id)arg1 node:(id)arg2 ;
-(void)setParentNode:(IKDOMNode *)arg1 ;
@end

