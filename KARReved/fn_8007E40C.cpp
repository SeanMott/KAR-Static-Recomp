//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following



void fn_8007E40C(PPC::Runtime::GCContext* context)
{
/*8007E40C 0007B20C*/ PPC::Runtime::ASM::stwu(context->r1, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x10, context->r1));
/*8007E410 0007B210*/ PPC::Runtime::ASM::mflr(context->r0);
/*8007E414 0007B214*/ PPC::Runtime::ASM::cmplwi(context->r3, 0x2);
/*8007E418 0007B218*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*8007E41C 0007B21C*/ PPC::Runtime::ASM::stw(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r1));
/*8007E420 0007B220*/ PPC::Runtime::ASM::mr(context->r31, context->r5);
/*8007E424 0007B224*/ PPC::Runtime::ASM::stw(context->r30, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r1));
/*8007E428 0007B228*/ PPC::Runtime::ASM::mr(context->r30, context->r4);
/*8007E42C 0007B22C*/ PPC::Runtime::ASM::bne(.L_8007E4E4);
/*8007E430 0007B230*/ PPC::Runtime::ASM::li(context->r3, -0x1);
/*8007E434 0007B234*/ PPC::Runtime::ASM::bl(fn_HSD_StateInvalidate);
/*8007E438 0007B238*/ PPC::Runtime::ASM::li(context->r3, 0x0);
/*8007E43C 0007B23C*/ PPC::Runtime::ASM::li(context->r4, 0x2);
/*8007E440 0007B240*/ PPC::Runtime::ASM::bl(fn_HSD_StateInitDirect);
/*8007E444 0007B244*/ PPC::Runtime::ASM::bl(fn_COBJ_GetCurrent);
/*8007E448 0007B248*/ PPC::Runtime::ASM::li(context->r4, 0x0);
/*8007E44C 0007B24C*/ PPC::Runtime::ASM::addi(context->r3, context->r3, 0x54);
/*8007E450 0007B250*/ PPC::Runtime::ASM::bl(fn_GXLoadPosMtxImm);
/*8007E454 0007B254*/ PPC::Runtime::ASM::li(context->r3, 0xc);
/*8007E458 0007B258*/ PPC::Runtime::ASM::li(context->r4, 0x5);
/*8007E45C 0007B25C*/ PPC::Runtime::ASM::bl(fn_GXSetLineWidth);
/*8007E460 0007B260*/ PPC::Runtime::ASM::li(context->r3, 0xa8);
/*8007E464 0007B264*/ PPC::Runtime::ASM::li(context->r4, 0x0);
/*8007E468 0007B268*/ PPC::Runtime::ASM::li(context->r5, 0x2);
/*8007E46C 0007B26C*/ PPC::Runtime::ASM::bl(fn_GXBegin);
/*8007E470 0007B270*/ PPC::Runtime::ASM::lfs(context->f5, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r30));
/*8007E474 0007B274*/ PPC::Runtime::ASM::lis(context->r7, 0xcc01);
/*8007E478 0007B278*/ PPC::Runtime::ASM::lfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r31));
/*8007E47C 0007B27C*/ PPC::Runtime::ASM::li(context->r5, lbl_805D543C @ Get_MemoryOffset_SDA21);
/*8007E480 0007B280*/ PPC::Runtime::ASM::lfs(context->f4, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x4, context->r30));
/*8007E484 0007B284*/ PPC::Runtime::ASM::lfs(context->f1, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x4, context->r31));
/*8007E488 0007B288*/ PPC::Runtime::ASM::fadds(context->f2, context->f5, context->f0);
/*8007E48C 0007B28C*/ PPC::Runtime::ASM::lfs(context->f3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r30));
/*8007E490 0007B290*/ PPC::Runtime::ASM::lfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r31));
/*8007E494 0007B294*/ PPC::Runtime::ASM::fadds(context->f1, context->f4, context->f1);
/*8007E498 0007B298*/ PPC::Runtime::ASM::stfs(context->f5, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x8000, context->r7));
/*8007E49C 0007B29C*/ PPC::Runtime::ASM::fadds(context->f0, context->f3, context->f0);
/*8007E4A0 0007B2A0*/ PPC::Runtime::ASM::stfs(context->f4, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x8000, context->r7));
/*8007E4A4 0007B2A4*/ PPC::Runtime::ASM::stfs(context->f3, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x8000, context->r7));
/*8007E4A8 0007B2A8*/ PPC::Runtime::ASM::lbz(context->r6, lbl_805D543C @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*8007E4AC 0007B2AC*/ PPC::Runtime::ASM::stb(context->r6, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x8000, context->r7));
/*8007E4B0 0007B2B0*/ PPC::Runtime::ASM::lbz(context->r4, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x1, context->r5));
/*8007E4B4 0007B2B4*/ PPC::Runtime::ASM::stb(context->r4, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x8000, context->r7));
/*8007E4B8 0007B2B8*/ PPC::Runtime::ASM::lbz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x2, context->r5));
/*8007E4BC 0007B2BC*/ PPC::Runtime::ASM::stb(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x8000, context->r7));
/*8007E4C0 0007B2C0*/ PPC::Runtime::ASM::lbz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x3, context->r5));
/*8007E4C4 0007B2C4*/ PPC::Runtime::ASM::stb(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x8000, context->r7));
/*8007E4C8 0007B2C8*/ PPC::Runtime::ASM::stfs(context->f2, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x8000, context->r7));
/*8007E4CC 0007B2CC*/ PPC::Runtime::ASM::stfs(context->f1, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x8000, context->r7));
/*8007E4D0 0007B2D0*/ PPC::Runtime::ASM::stfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x8000, context->r7));
/*8007E4D4 0007B2D4*/ PPC::Runtime::ASM::stb(context->r6, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x8000, context->r7));
/*8007E4D8 0007B2D8*/ PPC::Runtime::ASM::stb(context->r4, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x8000, context->r7));
/*8007E4DC 0007B2DC*/ PPC::Runtime::ASM::stb(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x8000, context->r7));
/*8007E4E0 0007B2E0*/ PPC::Runtime::ASM::stb(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x8000, context->r7));
RUNTIME_PPC_JUMP_LABEL(.L_8007E4E4, 0x8007E4E4) //this is a jump label
/*8007E4E4 0007B2E4*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*8007E4E8 0007B2E8*/ PPC::Runtime::ASM::li(context->r3, 0x0);
/*8007E4EC 0007B2EC*/ PPC::Runtime::ASM::lwz(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r1));
/*8007E4F0 0007B2F0*/ PPC::Runtime::ASM::lwz(context->r30, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r1));
/*8007E4F4 0007B2F4*/ PPC::Runtime::ASM::mtlr(context->r0);
/*8007E4F8 0007B2F8*/ PPC::Runtime::ASM::addi(context->r1, context->r1, 0x10);
/*8007E4FC 0007B2FC*/ PPC::Runtime::ASM::blr();
}