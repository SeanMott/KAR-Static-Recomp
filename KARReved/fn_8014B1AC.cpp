//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following
#include "fn_8014AAEC.hpp"



void fn_8014B1AC(PPC::Runtime::GCContext* context)
{
/*8014B1AC 00147FAC*/ PPC::Runtime::ASM::stwu(context->r1, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x20, context->r1));
/*8014B1B0 00147FB0*/ PPC::Runtime::ASM::mflr(context->r0);
/*8014B1B4 00147FB4*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x24, context->r1));
/*8014B1B8 00147FB8*/ PPC::Runtime::ASM::stw(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x1c, context->r1));
/*8014B1BC 00147FBC*/ PPC::Runtime::ASM::stw(context->r30, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x18, context->r1));
/*8014B1C0 00147FC0*/ PPC::Runtime::ASM::lwz(context->r30, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x28, context->r3));
/*8014B1C4 00147FC4*/ PPC::Runtime::ASM::lwz(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x2c, context->r3));
/*8014B1C8 00147FC8*/ PPC::Runtime::ASM::mr(context->r3, context->r30);
/*8014B1CC 00147FCC*/ PPC::Runtime::ASM::bl(fn_HSD_JObjAnimAll?);
/*8014B1D0 00147FD0*/ PPC::Runtime::ASM::lbz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r31));
/*8014B1D4 00147FD4*/ PPC::Runtime::ASM::addi(context->r4, context->r1, 0x8);
/*8014B1D8 00147FD8*/ PPC::Runtime::ASM::bl(fn_8014AAEC);
/*8014B1DC 00147FDC*/ PPC::Runtime::ASM::cmplwi(context->r30, 0x0);
/*8014B1E0 00147FE0*/ PPC::Runtime::ASM::bne(.L_8014B1F4);
/*8014B1E4 00147FE4*/ PPC::Runtime::ASM::li(context->r3, lbl_805D66D8 @ Get_MemoryOffset_SDA21);
/*8014B1E8 00147FE8*/ PPC::Runtime::ASM::li(context->r4, 0x3a9);
/*8014B1EC 00147FEC*/ PPC::Runtime::ASM::li(context->r5, lbl_805D66E0 @ Get_MemoryOffset_SDA21);
/*8014B1F0 00147FF0*/ PPC::Runtime::ASM::bl(fn___assert);
RUNTIME_PPC_JUMP_LABEL(.L_8014B1F4, 0x8014B1F4) //this is a jump label
/*8014B1F4 00147FF4*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r1));
/*8014B1F8 00147FF8*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r1));
/*8014B1FC 00147FFC*/ PPC::Runtime::ASM::stw(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x38, context->r30));
/*8014B200 00148000*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x3c, context->r30));
/*8014B204 00148004*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x10, context->r1));
/*8014B208 00148008*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x40, context->r30));
/*8014B20C 0014800C*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r30));
/*8014B210 00148010*/ PPC::Runtime::ASM::rlwinm.(context->r0, context->r0, 0, 6, 6);
/*8014B214 00148014*/ PPC::Runtime::ASM::bne(.L_8014B260);
/*8014B218 00148018*/ PPC::Runtime::ASM::cmplwi(context->r30, 0x0);
/*8014B21C 0014801C*/ PPC::Runtime::ASM::beq(.L_8014B260);
/*8014B220 00148020*/ PPC::Runtime::ASM::bne(.L_8014B234);
/*8014B224 00148024*/ PPC::Runtime::ASM::li(context->r3, lbl_805D66D8 @ Get_MemoryOffset_SDA21);
/*8014B228 00148028*/ PPC::Runtime::ASM::li(context->r4, 0x25d);
/*8014B22C 0014802C*/ PPC::Runtime::ASM::li(context->r5, lbl_805D66E0 @ Get_MemoryOffset_SDA21);
/*8014B230 00148030*/ PPC::Runtime::ASM::bl(fn___assert);
RUNTIME_PPC_JUMP_LABEL(.L_8014B234, 0x8014B234) //this is a jump label
/*8014B234 00148034*/ PPC::Runtime::ASM::lwz(context->r4, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r30));
/*8014B238 00148038*/ PPC::Runtime::ASM::li(context->r3, 0x0);
/*8014B23C 0014803C*/ PPC::Runtime::ASM::rlwinm.(context->r0, context->r4, 0, 8, 8);
/*8014B240 00148040*/ PPC::Runtime::ASM::bne(.L_8014B250);
/*8014B244 00148044*/ PPC::Runtime::ASM::rlwinm.(context->r0, context->r4, 0, 25, 25);
/*8014B248 00148048*/ PPC::Runtime::ASM::beq(.L_8014B250);
/*8014B24C 0014804C*/ PPC::Runtime::ASM::li(context->r3, 0x1);
RUNTIME_PPC_JUMP_LABEL(.L_8014B250, 0x8014B250) //this is a jump label
/*8014B250 00148050*/ PPC::Runtime::ASM::cmpwi(context->r3, 0x0);
/*8014B254 00148054*/ PPC::Runtime::ASM::bne(.L_8014B260);
/*8014B258 00148058*/ PPC::Runtime::ASM::mr(context->r3, context->r30);
/*8014B25C 0014805C*/ PPC::Runtime::ASM::bl(fn_HSD_JOBJ_SetMtxDirtySub);
RUNTIME_PPC_JUMP_LABEL(.L_8014B260, 0x8014B260) //this is a jump label
/*8014B260 00148060*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x24, context->r1));
/*8014B264 00148064*/ PPC::Runtime::ASM::lwz(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x1c, context->r1));
/*8014B268 00148068*/ PPC::Runtime::ASM::lwz(context->r30, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x18, context->r1));
/*8014B26C 0014806C*/ PPC::Runtime::ASM::mtlr(context->r0);
/*8014B270 00148070*/ PPC::Runtime::ASM::addi(context->r1, context->r1, 0x20);
/*8014B274 00148074*/ PPC::Runtime::ASM::blr();
}