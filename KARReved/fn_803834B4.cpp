//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following



void fn_803834B4(PPC::Runtime::GCContext* context)
{
/*803834B4 003802B4*/ PPC::Runtime::ASM::stwu(context->r1, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x10, context->r1));
/*803834B8 003802B8*/ PPC::Runtime::ASM::mflr(context->r0);
/*803834BC 003802BC*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*803834C0 003802C0*/ PPC::Runtime::ASM::lwz(context->r0, STRUCT_BYTE4_COUNT_1805DDC80 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*803834C4 003802C4*/ PPC::Runtime::ASM::cmpwi(context->r0, 0x4);
/*803834C8 003802C8*/ PPC::Runtime::ASM::bge(.L_803834E0);
/*803834CC 003802CC*/ PPC::Runtime::ASM::cmpwi(context->r0, 0x2);
/*803834D0 003802D0*/ PPC::Runtime::ASM::bge(.L_803834D8);
/*803834D4 003802D4*/ PPC::Runtime::ASM::b(.L_803834E0);
RUNTIME_PPC_JUMP_LABEL(.L_803834D8, 0x803834D8) //this is a jump label
/*803834D8 003802D8*/ PPC::Runtime::ASM::bl(fn_80383C98);
/*803834DC 003802DC*/ PPC::Runtime::ASM::b(.L_803834E4);
RUNTIME_PPC_JUMP_LABEL(.L_803834E0, 0x803834E0) //this is a jump label
/*803834E0 003802E0*/ PPC::Runtime::ASM::bl(fn_HSD_DObjDisp);
RUNTIME_PPC_JUMP_LABEL(.L_803834E4, 0x803834E4) //this is a jump label
/*803834E4 003802E4*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*803834E8 003802E8*/ PPC::Runtime::ASM::mtlr(context->r0);
/*803834EC 003802EC*/ PPC::Runtime::ASM::addi(context->r1, context->r1, 0x10);
/*803834F0 003802F0*/ PPC::Runtime::ASM::blr();
}