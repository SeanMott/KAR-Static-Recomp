//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following



void fn_800AF174(PPC::Runtime::GCContext* context)
{
/*800AF174 000ABF74*/ PPC::Runtime::ASM::stwu(context->r1, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x10, context->r1));
/*800AF178 000ABF78*/ PPC::Runtime::ASM::mflr(context->r0);
/*800AF17C 000ABF7C*/ PPC::Runtime::ASM::cmpwi(context->r3, 0x4);
/*800AF180 000ABF80*/ PPC::Runtime::ASM::li(context->r4, 0x0);
/*800AF184 000ABF84*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*800AF188 000ABF88*/ PPC::Runtime::ASM::bne(.L_800AF1A4);
/*800AF18C 000ABF8C*/ PPC::Runtime::ASM::lis(context->r3, STRUCT_BYTE4_COUNT_180557108 @ Get_MemoryOffset_HighBit);
/*800AF190 000ABF90*/ PPC::Runtime::ASM::li(context->r0, 0x0);
/*800AF194 000ABF94*/ PPC::Runtime::ASM::addi(context->r3, context->r3, STRUCT_BYTE4_COUNT_180557108 @ Get_MemoryOffset_LowBit);
/*800AF198 000ABF98*/ PPC::Runtime::ASM::li(context->r4, 0x1);
/*800AF19C 000ABF9C*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x10, context->r3));
/*800AF1A0 000ABFA0*/ PPC::Runtime::ASM::b(.L_800AF1B8);
RUNTIME_PPC_JUMP_LABEL(.L_800AF1A4, 0x800AF1A4) //this is a jump label
/*800AF1A4 000ABFA4*/ PPC::Runtime::ASM::cmpwi(context->r3, 0x2);
/*800AF1A8 000ABFA8*/ PPC::Runtime::ASM::beq(.L_800AF1B4);
/*800AF1AC 000ABFAC*/ PPC::Runtime::ASM::cmpwi(context->r3, 0x3);
/*800AF1B0 000ABFB0*/ PPC::Runtime::ASM::bne(.L_800AF1B8);
RUNTIME_PPC_JUMP_LABEL(.L_800AF1B4, 0x800AF1B4) //this is a jump label
/*800AF1B4 000ABFB4*/ PPC::Runtime::ASM::li(context->r4, 0x1);
RUNTIME_PPC_JUMP_LABEL(.L_800AF1B8, 0x800AF1B8) //this is a jump label
/*800AF1B8 000ABFB8*/ PPC::Runtime::ASM::cmpwi(context->r4, 0x0);
/*800AF1BC 000ABFBC*/ PPC::Runtime::ASM::beq(.L_800AF1E0);
/*800AF1C0 000ABFC0*/ PPC::Runtime::ASM::lis(context->r3, STRUCT_BYTE4_COUNT_180557108 @ Get_MemoryOffset_HighBit);
/*800AF1C4 000ABFC4*/ PPC::Runtime::ASM::addi(context->r4, context->r3, STRUCT_BYTE4_COUNT_180557108 @ Get_MemoryOffset_LowBit);
/*800AF1C8 000ABFC8*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x28, context->r4));
/*800AF1CC 000ABFCC*/ PPC::Runtime::ASM::cmpwi(context->r3, -0x1);
/*800AF1D0 000ABFD0*/ PPC::Runtime::ASM::beq(.L_800AF1E0);
/*800AF1D4 000ABFD4*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x10, context->r4));
/*800AF1D8 000ABFD8*/ PPC::Runtime::ASM::clrlwi(context->r4, context->r0, 24);
/*800AF1DC 000ABFDC*/ PPC::Runtime::ASM::bl(fn_80442CFC);
RUNTIME_PPC_JUMP_LABEL(.L_800AF1E0, 0x800AF1E0) //this is a jump label
/*800AF1E0 000ABFE0*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*800AF1E4 000ABFE4*/ PPC::Runtime::ASM::li(context->r3, 0x0);
/*800AF1E8 000ABFE8*/ PPC::Runtime::ASM::mtlr(context->r0);
/*800AF1EC 000ABFEC*/ PPC::Runtime::ASM::addi(context->r1, context->r1, 0x10);
/*800AF1F0 000ABFF0*/ PPC::Runtime::ASM::blr();
}