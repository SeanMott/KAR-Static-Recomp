//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following



void fn_80065B40(PPC::Runtime::GCContext* context)
{
/*80065B40 00062940*/ PPC::Runtime::ASM::lwz(context->r5, STRUCT_BYTE4_COUNT_1805DE334 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*80065B44 00062944*/ PPC::Runtime::ASM::lwz(context->r6, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x74, context->r5));
/*80065B48 00062948*/ PPC::Runtime::ASM::b(.L_80065B60);
RUNTIME_PPC_JUMP_LABEL(.L_80065B4C, 0x80065B4C) //this is a jump label
/*80065B4C 0006294C*/ PPC::Runtime::ASM::lwz(context->r5, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x2c, context->r6));
/*80065B50 00062950*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r5));
/*80065B54 00062954*/ PPC::Runtime::ASM::cmpw(context->r0, context->r3);
/*80065B58 00062958*/ PPC::Runtime::ASM::beq(.L_80065B68);
/*80065B5C 0006295C*/ PPC::Runtime::ASM::lwz(context->r6, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r6));
RUNTIME_PPC_JUMP_LABEL(.L_80065B60, 0x80065B60) //this is a jump label
/*80065B60 00062960*/ PPC::Runtime::ASM::cmplwi(context->r6, 0x0);
/*80065B64 00062964*/ PPC::Runtime::ASM::bne(.L_80065B4C);
RUNTIME_PPC_JUMP_LABEL(.L_80065B68, 0x80065B68) //this is a jump label
/*80065B68 00062968*/ PPC::Runtime::ASM::cmplwi(context->r6, 0x0);
/*80065B6C 0006296C*/ PPC::Runtime::ASM::beqlr();
/*80065B70 00062970*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x2c, context->r6));
/*80065B74 00062974*/ PPC::Runtime::ASM::stw(context->r4, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r3));
/*80065B78 00062978*/ PPC::Runtime::ASM::blr();
}