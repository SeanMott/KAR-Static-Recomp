//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following



void fn_HSD_TObjGetNext(PPC::Runtime::GCContext* context)
{
/*803F7858 003F4658*/ PPC::Runtime::ASM::cmplwi(context->r3, 0x0);
/*803F785C 003F465C*/ PPC::Runtime::ASM::bne(.L_803F7868);
/*803F7860 003F4660*/ PPC::Runtime::ASM::li(context->r3, 0x0);
/*803F7864 003F4664*/ PPC::Runtime::ASM::blr();
RUNTIME_PPC_JUMP_LABEL(.L_803F7868, 0x803F7868) //this is a jump label
/*803F7868 003F4668*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r3));
/*803F786C 003F466C*/ PPC::Runtime::ASM::blr();
}