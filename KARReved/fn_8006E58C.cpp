//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following



void fn_8006E58C(PPC::Runtime::GCContext* context)
{
/*8006E58C 0006B38C*/ PPC::Runtime::ASM::cmplwi(context->r3, 0x0);
/*8006E590 0006B390*/ PPC::Runtime::ASM::beq(.L_8006E59C);
/*8006E594 0006B394*/ PPC::Runtime::ASM::lfs(context->f1, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r3));
/*8006E598 0006B398*/ PPC::Runtime::ASM::blr();
RUNTIME_PPC_JUMP_LABEL(.L_8006E59C, 0x8006E59C) //this is a jump label
/*8006E59C 0006B39C*/ PPC::Runtime::ASM::lfs(context->f1, STRUCT_FLOAT_COUNT_1805DECB8 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*8006E5A0 0006B3A0*/ PPC::Runtime::ASM::blr();
}