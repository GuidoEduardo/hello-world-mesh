#include "SquareMesh.h"
#include "ProceduralMeshComponent.h"

ASquareMesh::ASquareMesh()
{
	PrimaryActorTick.bCanEverTick = false;

	ProceduralMesh = CreateDefaultSubobject<UProceduralMeshComponent>("ProceduralMesh");
	ProceduralMesh->SetupAttachment(GetRootComponent());
}

void ASquareMesh::BeginPlay()
{
	Super::BeginPlay();

	ProceduralMesh->CreateMeshSection_LinearColor(0, Vertices, Triangles, TArray<FVector>(), Uv0, TArray<FLinearColor>(), TArray<FProcMeshTangent>(), true);
	ProceduralMesh->SetMaterial(0, Material);
}

void ASquareMesh::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
}