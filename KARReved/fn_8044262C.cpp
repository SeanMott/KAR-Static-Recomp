//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following



void fn_8044262C(PPC::Runtime::GCContext* context)
{
/*8044262C 0043F42C*/ PPC::Runtime::ASM::cmpwi(context->r3, 0x0);
/*80442630 0043F430*/ PPC::Runtime::ASM::blt(.L_80442654);
/*80442634 0043F434*/ PPC::Runtime::ASM::cmpw(context->r3, context->r4);
/*80442638 0043F438*/ PPC::Runtime::ASM::bgt(.L_80442654);
/*8044263C 0043F43C*/ PPC::Runtime::ASM::cmpw(context->r4, context->r5);
/*80442640 0043F440*/ PPC::Runtime::ASM::bgt(.L_80442654);
/*80442644 0043F444*/ PPC::Runtime::ASM::cmpw(context->r5, context->r6);
/*80442648 0043F448*/ PPC::Runtime::ASM::bgt(.L_80442654);
/*8044264C 0043F44C*/ PPC::Runtime::ASM::cmpwi(context->r6, 0x168);
/*80442650 0043F450*/ PPC::Runtime::ASM::blt(.L_8044265C);
RUNTIME_PPC_JUMP_LABEL(.L_80442654, 0x80442654) //this is a jump label
/*80442654 0043F454*/ PPC::Runtime::ASM::li(context->r3, 0x0);
/*80442658 0043F458*/ PPC::Runtime::ASM::blr();
RUNTIME_PPC_JUMP_LABEL(.L_8044265C, 0x8044265C) //this is a jump label
/*8044265C 0043F45C*/ PPC::Runtime::ASM::stw(context->r3, StructValues_46 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*80442660 0043F460*/ PPC::Runtime::ASM::li(context->r3, 0x1);
/*80442664 0043F464*/ PPC::Runtime::ASM::stw(context->r4, StructValues_47 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*80442668 0043F468*/ PPC::Runtime::ASM::stw(context->r5, StructValues_48 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*8044266C 0043F46C*/ PPC::Runtime::ASM::stw(context->r6, StructValues_49 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*80442670 0043F470*/ PPC::Runtime::ASM::blr();
}