#include "st.h"
#include "stgl.h"
#include "stglut.h"
#include "ExampleScene.h"
#include <iostream>
#include <time.h>

using namespace std;

int main(int argc, const char * argv[])
{
    ExampleScene *scene = new ExampleScene();

    ////or set rendering scene from code
	////scenes for assignment 4
	//scene->initializeSceneBasicGeometry();
	//scene->initializeSceneBasicLightingAndShading();
	//scene->initializeSceneTransform();

    ////scenes for assignment 5
    //scene->initializeSceneAccelerationStructureGrid();
    //scene->initializeSceneAccelerationStructureBVH();

    ////scenes for assignment 6  
//	scene->initializeSceneTransparentObject();
//	scene->initializeSceneTransparentObject2();
	//scene->initializeSceneDepthOfField();
//    scene->initializeAssign6();

	////scenes for final
	//scene->initializeSceneObjMesh();
//    scene->initializeSceneTexture();
    scene->initializeFinalImage();

	////set rendering scene from script files
	//scene->initializeSceneFromScript("../Standard_Tests/RecursiveTest.txt");
    //scene->initializeSceneFromScript("../Standard_Tests/CornellBox.txt");
    //scene->initializeSceneFromScript("../Standard_Tests/DoF.txt");
	//scene->initializeSceneFromScript("../Standard_Tests/Glass.txt");
	//scene->initializeSceneFromScript("../Standard_Tests/Go.txt");
	//scene->initializeSceneFromScript("../Standard_Tests/Bowl.txt");
	//scene->rtSampleRate(4);

    ////initialize acceleration structures
    //scene->buildAccelStructures(std::string("aabb"));
    //scene->buildAccelStructures(std::string("grid"));

	clock_t start, end;
	start=clock();

	scene->Render();

	end=clock();
	cout << "Render time: "<<(double)(end-start) / ((double)CLOCKS_PER_SEC)<<" s"<<std::endl;

    //system("PAUSE");

    return 0;
}

