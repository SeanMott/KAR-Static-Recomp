//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following
#include "fn_80098E30.hpp"
#include "fn_8009F260.hpp"



void fn_800A03CC(PPC::Runtime::GCContext* context)
{
/*800A03CC 0009D1CC*/ PPC::Runtime::ASM::stwu(context->r1, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x50, context->r1));
/*800A03D0 0009D1D0*/ PPC::Runtime::ASM::mflr(context->r0);
/*800A03D4 0009D1D4*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x54, context->r1));
/*800A03D8 0009D1D8*/ PPC::Runtime::ASM::stw(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x4c, context->r1));
/* 800A03DC 0009D1DC  7C BF 2B 79 */ mr. context->r31 , context->r5
/*800A03E0 0009D1E0*/ PPC::Runtime::ASM::stw(context->r30, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x48, context->r1));
/*800A03E4 0009D1E4*/ PPC::Runtime::ASM::mr(context->r30, context->r4);
/*800A03E8 0009D1E8*/ PPC::Runtime::ASM::stw(context->r29, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x44, context->r1));
/*800A03EC 0009D1EC*/ PPC::Runtime::ASM::mr(context->r29, context->r3);
/*800A03F0 0009D1F0*/ PPC::Runtime::ASM::bne(.L_800A0494);
/*800A03F4 0009D1F4*/ PPC::Runtime::ASM::bl(fn_GXClearVtxDesc);
/*800A03F8 0009D1F8*/ PPC::Runtime::ASM::li(context->r3, 0x9);
/*800A03FC 0009D1FC*/ PPC::Runtime::ASM::li(context->r4, 0x1);
/*800A0400 0009D200*/ PPC::Runtime::ASM::bl(fn_GXSetVtxDesc);
/*800A0404 0009D204*/ PPC::Runtime::ASM::li(context->r3, 0x0);
/*800A0408 0009D208*/ PPC::Runtime::ASM::li(context->r4, 0x9);
/*800A040C 0009D20C*/ PPC::Runtime::ASM::li(context->r5, 0x1);
/*800A0410 0009D210*/ PPC::Runtime::ASM::li(context->r6, 0x4);
/*800A0414 0009D214*/ PPC::Runtime::ASM::li(context->r7, 0x0);
/*800A0418 0009D218*/ PPC::Runtime::ASM::bl(fn_GXSetVtxAttrFmt);
/*800A041C 0009D21C*/ PPC::Runtime::ASM::li(context->r3, 0xa);
/*800A0420 0009D220*/ PPC::Runtime::ASM::li(context->r4, 0x1);
/*800A0424 0009D224*/ PPC::Runtime::ASM::bl(fn_GXSetVtxDesc);
/*800A0428 0009D228*/ PPC::Runtime::ASM::li(context->r3, 0x0);
/*800A042C 0009D22C*/ PPC::Runtime::ASM::li(context->r4, 0xa);
/*800A0430 0009D230*/ PPC::Runtime::ASM::li(context->r5, 0x0);
/*800A0434 0009D234*/ PPC::Runtime::ASM::li(context->r6, 0x4);
/*800A0438 0009D238*/ PPC::Runtime::ASM::li(context->r7, 0x0);
/*800A043C 0009D23C*/ PPC::Runtime::ASM::bl(fn_GXSetVtxAttrFmt);
/*800A0440 0009D240*/ PPC::Runtime::ASM::bl(fn_COBJ_GetCurrent);
/*800A0444 0009D244*/ PPC::Runtime::ASM::addi(context->r4, context->r1, 0x8);
/*800A0448 0009D248*/ PPC::Runtime::ASM::bl(fn_HSD_CObjGetViewingMtx);
/*800A044C 0009D24C*/ PPC::Runtime::ASM::addi(context->r3, context->r1, 0x8);
/*800A0450 0009D250*/ PPC::Runtime::ASM::li(context->r4, 0x0);
/*800A0454 0009D254*/ PPC::Runtime::ASM::bl(fn_GXLoadPosMtxImm);
/*800A0458 0009D258*/ PPC::Runtime::ASM::addi(context->r3, context->r1, 0x8);
/*800A045C 0009D25C*/ PPC::Runtime::ASM::mr(context->r4, context->r3);
/*800A0460 0009D260*/ PPC::Runtime::ASM::bl(fn_PSMTXInvXpose);
/*800A0464 0009D264*/ PPC::Runtime::ASM::addi(context->r3, context->r1, 0x8);
/*800A0468 0009D268*/ PPC::Runtime::ASM::li(context->r4, 0x0);
/*800A046C 0009D26C*/ PPC::Runtime::ASM::bl(fn_GXLoadNrmMtxImm);
/*800A0470 0009D270*/ PPC::Runtime::ASM::li(context->r3, 0x0);
/*800A0474 0009D274*/ PPC::Runtime::ASM::bl(fn_GXSetCurrentMtx);
/*800A0478 0009D278*/ PPC::Runtime::ASM::mr(context->r3, context->r31);
/*800A047C 0009D27C*/ PPC::Runtime::ASM::bl(fn_80098E30);
/*800A0480 0009D280*/ PPC::Runtime::ASM::lis(context->r4, MemoryOffset_639 @ Get_MemoryOffset_HighBit);
/*800A0484 0009D284*/ PPC::Runtime::ASM::mr(context->r3, context->r29);
/*800A0488 0009D288*/ PPC::Runtime::ASM::addi(context->r5, context->r4, MemoryOffset_639 @ Get_MemoryOffset_LowBit);
/*800A048C 0009D28C*/ PPC::Runtime::ASM::mr(context->r4, context->r30);
/*800A0490 0009D290*/ PPC::Runtime::ASM::bl(fn_8009F260);
RUNTIME_PPC_JUMP_LABEL(.L_800A0494, 0x800A0494) //this is a jump label
/*800A0494 0009D294*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x54, context->r1));
/*800A0498 0009D298*/ PPC::Runtime::ASM::lwz(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x4c, context->r1));
/*800A049C 0009D29C*/ PPC::Runtime::ASM::lwz(context->r30, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x48, context->r1));
/*800A04A0 0009D2A0*/ PPC::Runtime::ASM::lwz(context->r29, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x44, context->r1));
/*800A04A4 0009D2A4*/ PPC::Runtime::ASM::mtlr(context->r0);
/*800A04A8 0009D2A8*/ PPC::Runtime::ASM::addi(context->r1, context->r1, 0x50);
/*800A04AC 0009D2AC*/ PPC::Runtime::ASM::blr();
}