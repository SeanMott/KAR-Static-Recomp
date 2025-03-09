//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following



void fn_80283384(PPC::Runtime::GCContext* context)
{
/*80283384 00280184*/ PPC::Runtime::ASM::stwu(context->r1, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x50, context->r1));
/*80283388 00280188*/ PPC::Runtime::ASM::mflr(context->r0);
/*8028338C 0028018C*/ PPC::Runtime::ASM::li(context->r4, 0x4);
/*80283390 00280190*/ PPC::Runtime::ASM::li(context->r5, 0x5);
/*80283394 00280194*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x54, context->r1));
/*80283398 00280198*/ PPC::Runtime::ASM::li(context->r6, 0x0);
/*8028339C 0028019C*/ PPC::Runtime::ASM::stw(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x4c, context->r1));
/*802833A0 002801A0*/ PPC::Runtime::ASM::mr(context->r31, context->r3);
/*802833A4 002801A4*/ PPC::Runtime::ASM::li(context->r3, 0x1);
/*802833A8 002801A8*/ PPC::Runtime::ASM::bl(fn_GXSetBlendMode);
/*802833AC 002801AC*/ PPC::Runtime::ASM::li(context->r3, 0x1);
/*802833B0 002801B0*/ PPC::Runtime::ASM::bl(fn_GXSetColorUpdate);
/*802833B4 002801B4*/ PPC::Runtime::ASM::li(context->r3, 0x0);
/*802833B8 002801B8*/ PPC::Runtime::ASM::bl(fn_GXSetAlphaUpdate);
/*802833BC 002801BC*/ PPC::Runtime::ASM::bl(fn_GXInvalidateVtxCache);
/*802833C0 002801C0*/ PPC::Runtime::ASM::bl(fn_GXClearVtxDesc);
/*802833C4 002801C4*/ PPC::Runtime::ASM::li(context->r3, 0x9);
/*802833C8 002801C8*/ PPC::Runtime::ASM::li(context->r4, 0x1);
/*802833CC 002801CC*/ PPC::Runtime::ASM::bl(fn_GXSetVtxDesc);
/*802833D0 002801D0*/ PPC::Runtime::ASM::li(context->r3, 0x7);
/*802833D4 002801D4*/ PPC::Runtime::ASM::li(context->r4, 0x9);
/*802833D8 002801D8*/ PPC::Runtime::ASM::li(context->r5, 0x1);
/*802833DC 002801DC*/ PPC::Runtime::ASM::li(context->r6, 0x4);
/*802833E0 002801E0*/ PPC::Runtime::ASM::li(context->r7, 0x0);
/*802833E4 002801E4*/ PPC::Runtime::ASM::bl(fn_GXSetVtxAttrFmt);
/*802833E8 002801E8*/ PPC::Runtime::ASM::li(context->r3, 0x0);
/*802833EC 002801EC*/ PPC::Runtime::ASM::bl(fn_GXSetNumTexGens);
/*802833F0 002801F0*/ PPC::Runtime::ASM::li(context->r3, 0x1);
/*802833F4 002801F4*/ PPC::Runtime::ASM::bl(fn_GXSetNumTevStages);
/*802833F8 002801F8*/ PPC::Runtime::ASM::li(context->r3, 0x1);
/*802833FC 002801FC*/ PPC::Runtime::ASM::bl(fn_GXSetNumChans);
/*80283400 00280200*/ PPC::Runtime::ASM::li(context->r3, 0x0);
/*80283404 00280204*/ PPC::Runtime::ASM::li(context->r4, 0xff);
/*80283408 00280208*/ PPC::Runtime::ASM::li(context->r5, 0xff);
/*8028340C 0028020C*/ PPC::Runtime::ASM::li(context->r6, 0x4);
/*80283410 00280210*/ PPC::Runtime::ASM::bl(fn_GXSetTevOrder);
/*80283414 00280214*/ PPC::Runtime::ASM::li(context->r3, 0x0);
/*80283418 00280218*/ PPC::Runtime::ASM::li(context->r4, 0x4);
/*8028341C 0028021C*/ PPC::Runtime::ASM::bl(fn_GXSetTevOp);
/*80283420 00280220*/ PPC::Runtime::ASM::li(context->r3, 0x0);
/*80283424 00280224*/ PPC::Runtime::ASM::li(context->r4, 0xf);
/*80283428 00280228*/ PPC::Runtime::ASM::li(context->r5, 0xf);
/*8028342C 0028022C*/ PPC::Runtime::ASM::li(context->r6, 0xf);
/*80283430 00280230*/ PPC::Runtime::ASM::li(context->r7, 0x2);
/*80283434 00280234*/ PPC::Runtime::ASM::bl(fn_GXSetTevColorIn);
/*80283438 00280238*/ PPC::Runtime::ASM::li(context->r3, 0x0);
/*8028343C 0028023C*/ PPC::Runtime::ASM::li(context->r4, 0x0);
/*80283440 00280240*/ PPC::Runtime::ASM::li(context->r5, 0x0);
/*80283444 00280244*/ PPC::Runtime::ASM::li(context->r6, 0x0);
/*80283448 00280248*/ PPC::Runtime::ASM::li(context->r7, 0x0);
/*8028344C 0028024C*/ PPC::Runtime::ASM::li(context->r8, 0x0);
/*80283450 00280250*/ PPC::Runtime::ASM::bl(fn_GXSetTevColorOp);
/*80283454 00280254*/ PPC::Runtime::ASM::li(context->r3, 0x0);
/*80283458 00280258*/ PPC::Runtime::ASM::li(context->r4, 0x7);
/*8028345C 0028025C*/ PPC::Runtime::ASM::li(context->r5, 0x7);
/*80283460 00280260*/ PPC::Runtime::ASM::li(context->r6, 0x7);
/*80283464 00280264*/ PPC::Runtime::ASM::li(context->r7, 0x1);
/*80283468 00280268*/ PPC::Runtime::ASM::bl(fn_GXSetTevAlphaIn);
/*8028346C 0028026C*/ PPC::Runtime::ASM::li(context->r3, 0x0);
/*80283470 00280270*/ PPC::Runtime::ASM::li(context->r4, 0x0);
/*80283474 00280274*/ PPC::Runtime::ASM::li(context->r5, 0x0);
/*80283478 00280278*/ PPC::Runtime::ASM::li(context->r6, 0x0);
/*8028347C 0028027C*/ PPC::Runtime::ASM::li(context->r7, 0x0);
/*80283480 00280280*/ PPC::Runtime::ASM::li(context->r8, 0x0);
/*80283484 00280284*/ PPC::Runtime::ASM::bl(fn_GXSetTevAlphaOp);
/*80283488 00280288*/ PPC::Runtime::ASM::bl(fn_COBJ_GetCurrent);
/*8028348C 0028028C*/ PPC::Runtime::ASM::addi(context->r4, context->r1, 0x10);
/*80283490 00280290*/ PPC::Runtime::ASM::bl(fn_HSD_CObjGetViewingMtx);
/*80283494 00280294*/ PPC::Runtime::ASM::addi(context->r3, context->r1, 0x10);
/*80283498 00280298*/ PPC::Runtime::ASM::li(context->r4, 0x0);
/*8028349C 0028029C*/ PPC::Runtime::ASM::bl(fn_GXLoadPosMtxImm);
/*802834A0 002802A0*/ PPC::Runtime::ASM::li(context->r0, 0xff);
/*802834A4 002802A4*/ PPC::Runtime::ASM::addi(context->r4, context->r1, 0x8);
/*802834A8 002802A8*/ PPC::Runtime::ASM::stb(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r1));
/*802834AC 002802AC*/ PPC::Runtime::ASM::li(context->r3, 0x1);
/*802834B0 002802B0*/ PPC::Runtime::ASM::stb(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xd, context->r1));
/*802834B4 002802B4*/ PPC::Runtime::ASM::stb(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xe, context->r1));
/*802834B8 002802B8*/ PPC::Runtime::ASM::stb(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xf, context->r1));
/*802834BC 002802BC*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r1));
/*802834C0 002802C0*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r1));
/*802834C4 002802C4*/ PPC::Runtime::ASM::bl(fn_GXSetTevColor);
/*802834C8 002802C8*/ PPC::Runtime::ASM::li(context->r3, 0x12);
/*802834CC 002802CC*/ PPC::Runtime::ASM::li(context->r4, 0x0);
/*802834D0 002802D0*/ PPC::Runtime::ASM::bl(fn_GXSetLineWidth);
/*802834D4 002802D4*/ PPC::Runtime::ASM::li(context->r3, 0xa8);
/*802834D8 002802D8*/ PPC::Runtime::ASM::li(context->r4, 0x7);
/*802834DC 002802DC*/ PPC::Runtime::ASM::li(context->r5, 0x2);
/*802834E0 002802E0*/ PPC::Runtime::ASM::bl(fn_GXBegin);
/*802834E4 002802E4*/ PPC::Runtime::ASM::lis(context->r0, 0x4330);
/*802834E8 002802E8*/ PPC::Runtime::ASM::lfs(context->f0, STRUCT_FLOAT_COUNT_1805E32C0 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*802834EC 002802EC*/ PPC::Runtime::ASM::lis(context->r4, 0xcc01);
/*802834F0 002802F0*/ PPC::Runtime::ASM::stw(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x44, context->r1));
/*802834F4 002802F4*/ PPC::Runtime::ASM::lfd(context->f1, STRUCT_DOUBLE_COUNT_1805E32C8 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*802834F8 002802F8*/ PPC::Runtime::ASM::li(context->r3, -0x1);
/*802834FC 002802FC*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x40, context->r1));
/*80283500 00280300*/ PPC::Runtime::ASM::stfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x8000, context->r4));
/*80283504 00280304*/ PPC::Runtime::ASM::lfs(context->f2, STRUCT_FLOAT_COUNT_1805E32D0 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*80283508 00280308*/ PPC::Runtime::ASM::lfd(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x40, context->r1));
/*8028350C 0028030C*/ PPC::Runtime::ASM::stfs(context->f2, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x8000, context->r4));
/*80283510 00280310*/ PPC::Runtime::ASM::lfs(context->f2, STRUCT_FLOAT_COUNT_1805E32C0 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*80283514 00280314*/ PPC::Runtime::ASM::fsubs(context->f0, context->f0, context->f1);
/*80283518 00280318*/ PPC::Runtime::ASM::stfs(context->f2, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x8000, context->r4));
/*8028351C 0028031C*/ PPC::Runtime::ASM::stfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x8000, context->r4));
/*80283520 00280320*/ PPC::Runtime::ASM::lfs(context->f0, STRUCT_FLOAT_COUNT_1805E32D0 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*80283524 00280324*/ PPC::Runtime::ASM::stfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x8000, context->r4));
/*80283528 00280328*/ PPC::Runtime::ASM::lfs(context->f0, STRUCT_FLOAT_COUNT_1805E32C0 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*8028352C 0028032C*/ PPC::Runtime::ASM::stfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x8000, context->r4));
/*80283530 00280330*/ PPC::Runtime::ASM::bl(fn_HSD_StateInvalidate);
/*80283534 00280334*/ PPC::Runtime::ASM::bl(fn_HSD_ClearVtxDesc);
/*80283538 00280338*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x54, context->r1));
/*8028353C 0028033C*/ PPC::Runtime::ASM::lwz(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x4c, context->r1));
/*80283540 00280340*/ PPC::Runtime::ASM::mtlr(context->r0);
/*80283544 00280344*/ PPC::Runtime::ASM::addi(context->r1, context->r1, 0x50);
/*80283548 00280348*/ PPC::Runtime::ASM::blr();
}