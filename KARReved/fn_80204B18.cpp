//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following



void fn_80204B18(PPC::Runtime::GCContext* context)
{
/*80204B18 00201918*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x2c, context->r3));
/*80204B1C 0020191C*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r3));
/*80204B20 00201920*/ PPC::Runtime::ASM::cmpwi(context->r0, 0x4d);
/*80204B24 00201924*/ PPC::Runtime::ASM::bne(.L_80204B44);
/*80204B28 00201928*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x34, context->r3));
/*80204B2C 0020192C*/ PPC::Runtime::ASM::cmpwi(context->r0, 0xf);
/*80204B30 00201930*/ PPC::Runtime::ASM::beq(.L_80204B3C);
/*80204B34 00201934*/ PPC::Runtime::ASM::cmpwi(context->r0, 0x10);
/*80204B38 00201938*/ PPC::Runtime::ASM::bne(.L_80204B44);
RUNTIME_PPC_JUMP_LABEL(.L_80204B3C, 0x80204B3C) //this is a jump label
/*80204B3C 0020193C*/ PPC::Runtime::ASM::li(context->r3, 0x1);
/*80204B40 00201940*/ PPC::Runtime::ASM::blr();
RUNTIME_PPC_JUMP_LABEL(.L_80204B44, 0x80204B44) //this is a jump label
/*80204B44 00201944*/ PPC::Runtime::ASM::li(context->r3, 0x0);
/*80204B48 00201948*/ PPC::Runtime::ASM::blr();
}