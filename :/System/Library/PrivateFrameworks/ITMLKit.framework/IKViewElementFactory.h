/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, April 19, 2016 at 11:52:53 AM Mountain Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/ITMLKit.framework/ITMLKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <ITMLKit/ITMLKit-Structs.h>
@class IKViewElementStyleFactory;

@interface IKViewElementFactory : NSObject {

	struct {
		unsigned sparse : 1;
		unsigned parsingUpdatedTree : 1;
		unsigned parsingReorderedSiblings : 1;
	}  _parsingFlags;
	IKViewElementStyleFactory* _styleFactory;

}

@property (nonatomic,retain) IKViewElementStyleFactory * styleFactory;              //@synthesize styleFactory=_styleFactory - In the implementation block
@property (assign,getter=isSparse,nonatomic) BOOL sparse; 
+(void)initialize;
+(id)elementsForDocumentElement:(id)arg1 sparse:(BOOL)arg2 styleFactory:(id*)arg3 ;
+(Class)elementClassByTagName:(id)arg1 ;
+(unsigned long long)elementTypeByTagName:(id)arg1 ;
+(void)registerClass:(Class)arg1 forElementName:(id)arg2 elementType:(unsigned long long)arg3 ;
-(IKViewElementStyleFactory *)styleFactory;
-(void)setStyleFactory:(IKViewElementStyleFactory *)arg1 ;
-(void)setSparse:(BOOL)arg1 ;
-(BOOL)isSparse;
-(id)elementForDOMElement:(id)arg1 parent:(id)arg2 ;
@end

