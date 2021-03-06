/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, April 19, 2016 at 11:55:44 AM Mountain Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/VectorKit.framework/VectorKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <VectorKit/VectorKit-Structs.h>
@interface VKCoastlineGroup : NSObject {

	shared_ptr<gss::StyleQuery>* _styleQuery;
	unsigned _tilePointSize;
	unique_ptr<ggl::MeshVendor<ggl::PolygonMesh::MeshMesh>, std::__1::default_delete<ggl::MeshVendor<ggl::PolygonMesh::MeshMesh> > >* _coastlineMeshVendor;
	unique_ptr<ggl::MeshVendor<ggl::Glow::MeshMesh>, std::__1::default_delete<ggl::MeshVendor<ggl::Glow::MeshMesh> > >* _glowMeshVendor;

}

@property (nonatomic,readonly) const MeshVendor<ggl::PolygonMesh::MeshMesh>* coastlineMeshVendor; 
@property (nonatomic,readonly) const MeshVendor<ggl::Glow::MeshMesh>* glowMeshVendor; 
@property (nonatomic,readonly) shared_ptr<gss::StyleQuery>* styleQuery;                                        //@synthesize styleQuery=_styleQuery - In the implementation block
-(const MeshVendor<ggl::PolygonMesh::MeshMesh>*)coastlineMeshVendor;
-(shared_ptr<gss::StyleQuery>*)styleQuery;
-(const MeshVendor<ggl::Glow::MeshMesh>*)glowMeshVendor;
-(void)addCoastlineFeature:(SCD_Struct_VK470*)arg1 ;
-(id)initWithStyleQuery:(shared_ptr<gss::StyleQuery>*)arg1 tilePointSize:(unsigned)arg2 ;
@end

