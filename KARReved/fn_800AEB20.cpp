//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following



void fn_800AEB20(PPC::Runtime::GCContext* context)
{
/*800AEB20 000AB920*/ PPC::Runtime::ASM::stwu(context->r1, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x10, context->r1));
/*800AEB24 000AB924*/ PPC::Runtime::ASM::mflr(context->r0);
/*800AEB28 000AB928*/ PPC::Runtime::ASM::cmpwi(context->r3, 0x6);
/*800AEB2C 000AB92C*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*800AEB30 000AB930*/ PPC::Runtime::ASM::bne(.L_800AEB44);
/*800AEB34 000AB934*/ PPC::Runtime::ASM::bl(fn_804484C8);
/*800AEB38 000AB938*/ PPC::Runtime::ASM::lis(context->r4, AllZeros_50 @ Get_MemoryOffset_HighBit);
/*800AEB3C 000AB93C*/ PPC::Runtime::ASM::addi(context->r4, context->r4, AllZeros_50 @ Get_MemoryOffset_LowBit);
/*800AEB40 000AB940*/ PPC::Runtime::ASM::stw(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r4));
RUNTIME_PPC_JUMP_LABEL(.L_800AEB44, 0x800AEB44) //this is a jump label
/*800AEB44 000AB944*/ PPC::Runtime::ASM::lis(context->r3, AllZeros_50 @ Get_MemoryOffset_HighBit);
/*800AEB48 000AB948*/ PPC::Runtime::ASM::addi(context->r3, context->r3, AllZeros_50 @ Get_MemoryOffset_LowBit);
/*800AEB4C 000AB94C*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r3));
/*800AEB50 000AB950*/ PPC::Runtime::ASM::cmpwi(context->r3, 0x1);
/*800AEB54 000AB954*/ PPC::Runtime::ASM::beq(.L_800AEB78);
/*800AEB58 000AB958*/ PPC::Runtime::ASM::cmpwi(context->r3, 0x0);
/*800AEB5C 000AB95C*/ PPC::Runtime::ASM::beq(.L_800AEB78);
/*800AEB60 000AB960*/ PPC::Runtime::ASM::cmpwi(context->r3, 0x2);
/*800AEB64 000AB964*/ PPC::Runtime::ASM::beq(.L_800AEB78);
/*800AEB68 000AB968*/ PPC::Runtime::ASM::cmpwi(context->r3, 0x3);
/*800AEB6C 000AB96C*/ PPC::Runtime::ASM::beq(.L_800AEB78);
/*800AEB70 000AB970*/ PPC::Runtime::ASM::cmpwi(context->r3, 0x4);
/*800AEB74 000AB974*/ PPC::Runtime::ASM::bne(.L_800AEB7C);
RUNTIME_PPC_JUMP_LABEL(.L_800AEB78, 0x800AEB78) //this is a jump label
/*800AEB78 000AB978*/ PPC::Runtime::ASM::bl(fn_804484D0);
RUNTIME_PPC_JUMP_LABEL(.L_800AEB7C, 0x800AEB7C) //this is a jump label
/*800AEB7C 000AB97C*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*800AEB80 000AB980*/ PPC::Runtime::ASM::li(context->r3, 0x0);
/*800AEB84 000AB984*/ PPC::Runtime::ASM::mtlr(context->r0);
/*800AEB88 000AB988*/ PPC::Runtime::ASM::addi(context->r1, context->r1, 0x10);
/*800AEB8C 000AB98C*/ PPC::Runtime::ASM::blr();
}