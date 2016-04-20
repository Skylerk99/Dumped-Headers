/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, April 19, 2016 at 11:52:52 AM Mountain Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/ITMLKit.framework/ITMLKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

@class IKDOMHTMLCollection, IKDOMElement;


@protocol IKJSDOMParentNode <JSExport>
@property (nonatomic,readonly) IKDOMHTMLCollection * children; 
@property (nonatomic,readonly) IKDOMElement * firstElementChild; 
@property (nonatomic,readonly) IKDOMElement * lastElementChild; 
@property (nonatomic,readonly) unsigned long long childElementCount; 
@required
-(IKDOMElement *)firstElementChild;
-(IKDOMHTMLCollection *)children;
-(IKDOMElement *)lastElementChild;
-(unsigned long long)childElementCount;

@end

