//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following
#include "fn_80058E1C.hpp"
#include "fn_80058E1C.hpp"
#include "fn_80058E60.hpp"



void fn_80059228(PPC::Runtime::GCContext* context)
{
/*80059228 00056028*/ PPC::Runtime::ASM::stwu(context->r1, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x10, context->r1));
/*8005922C 0005602C*/ PPC::Runtime::ASM::mflr(context->r0);
/*80059230 00056030*/ PPC::Runtime::ASM::lis(context->r7, fn_80058E1C @ Get_MemoryOffset_HighBit);
/*80059234 00056034*/ PPC::Runtime::ASM::mr(context->r11, context->r4);
/*80059238 00056038*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*8005923C 0005603C*/ PPC::Runtime::ASM::li(context->r0, 0x0);
/*80059240 00056040*/ PPC::Runtime::ASM::mr(context->r10, context->r5);
/*80059244 00056044*/ PPC::Runtime::ASM::mr(context->r8, context->r6);
/*80059248 00056048*/ PPC::Runtime::ASM::stw(context->r0, STRUCT_BYTE4_COUNT_1805DD5A8 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*8005924C 0005604C*/ PPC::Runtime::ASM::addi(context->r9, context->r7, fn_80058E1C @ Get_MemoryOffset_LowBit);
/*80059250 00056050*/ PPC::Runtime::ASM::mr(context->r4, context->r3);
/*80059254 00056054*/ PPC::Runtime::ASM::mr(context->r6, context->r10);
/*80059258 00056058*/ PPC::Runtime::ASM::mr(context->r5, context->r11);
/*8005925C 0005605C*/ PPC::Runtime::ASM::li(context->r3, 0x0);
/*80059260 00056060*/ PPC::Runtime::ASM::li(context->r7, 0x19);
/*80059264 00056064*/ PPC::Runtime::ASM::li(context->r10, 0x0);
/*80059268 00056068*/ PPC::Runtime::ASM::bl(fn_80446ACC);
RUNTIME_PPC_JUMP_LABEL(.L_8005926C, 0x8005926C) //this is a jump label
/*8005926C 0005606C*/ PPC::Runtime::ASM::bl(fn_80058E60);
/*80059270 00056070*/ PPC::Runtime::ASM::cmpwi(context->r3, 0x0);
/*80059274 00056074*/ PPC::Runtime::ASM::beq(.L_8005926C);
/*80059278 00056078*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*8005927C 0005607C*/ PPC::Runtime::ASM::mtlr(context->r0);
/*80059280 00056080*/ PPC::Runtime::ASM::addi(context->r1, context->r1, 0x10);
/*80059284 00056084*/ PPC::Runtime::ASM::blr();
}