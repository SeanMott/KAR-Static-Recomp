//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following
#include "fn_FuncDoesShit_5.hpp"
#include "fn_80131224.hpp"
#include "fn_80059520.hpp"
#include "fn_80059520.hpp"
#include "fn_80059520.hpp"
#include "fn_80059520.hpp"
#include "fn_80059520.hpp"
#include "fn_80059520.hpp"
#include "fn_80059520.hpp"



void fn_8016180C(PPC::Runtime::GCContext* context)
{
/*8016180C 0015E60C*/ PPC::Runtime::ASM::stwu(context->r1, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x20, context->r1));
/*80161810 0015E610*/ PPC::Runtime::ASM::mflr(context->r0);
/*80161814 0015E614*/ PPC::Runtime::ASM::lis(context->r3, lbl_804ABAF0 @ Get_MemoryOffset_HighBit);
/*80161818 0015E618*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x24, context->r1));
/*8016181C 0015E61C*/ PPC::Runtime::ASM::stw(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x1c, context->r1));
/*80161820 0015E620*/ PPC::Runtime::ASM::stw(context->r30, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x18, context->r1));
/*80161824 0015E624*/ PPC::Runtime::ASM::addi(context->r30, context->r3, lbl_804ABAF0 @ Get_MemoryOffset_LowBit);
/*80161828 0015E628*/ PPC::Runtime::ASM::stw(context->r29, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*8016182C 0015E62C*/ PPC::Runtime::ASM::bl(fn_FuncDoesShit_5);
/*80161830 0015E630*/ PPC::Runtime::ASM::addi(context->r29, context->r3, 0xf4);
/*80161834 0015E634*/ PPC::Runtime::ASM::bl(fn_80131224);
/*80161838 0015E638*/ PPC::Runtime::ASM::mr(context->r31, context->r3);
/*8016183C 0015E63C*/ PPC::Runtime::ASM::mr(context->r4, context->r29);
/*80161840 0015E640*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r3));
/*80161844 0015E644*/ PPC::Runtime::ASM::addi(context->r5, context->r30, 0x0);
/*80161848 0015E648*/ PPC::Runtime::ASM::li(context->r6, 0x0);
/*8016184C 0015E64C*/ PPC::Runtime::ASM::crclr(context->cr1eq);
/*80161850 0015E650*/ PPC::Runtime::ASM::bl(fn_80059520);
/*80161854 0015E654*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r31));
/*80161858 0015E658*/ PPC::Runtime::ASM::addi(context->r4, context->r29, 0x4);
/*8016185C 0015E65C*/ PPC::Runtime::ASM::addi(context->r5, context->r30, 0x24);
/*80161860 0015E660*/ PPC::Runtime::ASM::li(context->r6, 0x0);
/*80161864 0015E664*/ PPC::Runtime::ASM::crclr(context->cr1eq);
/*80161868 0015E668*/ PPC::Runtime::ASM::bl(fn_80059520);
/*8016186C 0015E66C*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r31));
/*80161870 0015E670*/ PPC::Runtime::ASM::addi(context->r4, context->r29, 0x8);
/*80161874 0015E674*/ PPC::Runtime::ASM::addi(context->r5, context->r30, 0x44);
/*80161878 0015E678*/ PPC::Runtime::ASM::li(context->r6, 0x0);
/*8016187C 0015E67C*/ PPC::Runtime::ASM::crclr(context->cr1eq);
/*80161880 0015E680*/ PPC::Runtime::ASM::bl(fn_80059520);
/*80161884 0015E684*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r31));
/*80161888 0015E688*/ PPC::Runtime::ASM::addi(context->r4, context->r29, 0xc);
/*8016188C 0015E68C*/ PPC::Runtime::ASM::addi(context->r5, context->r30, 0x68);
/*80161890 0015E690*/ PPC::Runtime::ASM::li(context->r6, 0x0);
/*80161894 0015E694*/ PPC::Runtime::ASM::crclr(context->cr1eq);
/*80161898 0015E698*/ PPC::Runtime::ASM::bl(fn_80059520);
/*8016189C 0015E69C*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r31));
/*801618A0 0015E6A0*/ PPC::Runtime::ASM::addi(context->r4, context->r29, 0x10);
/*801618A4 0015E6A4*/ PPC::Runtime::ASM::addi(context->r5, context->r30, 0x88);
/*801618A8 0015E6A8*/ PPC::Runtime::ASM::li(context->r6, 0x0);
/*801618AC 0015E6AC*/ PPC::Runtime::ASM::crclr(context->cr1eq);
/*801618B0 0015E6B0*/ PPC::Runtime::ASM::bl(fn_80059520);
/*801618B4 0015E6B4*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r31));
/*801618B8 0015E6B8*/ PPC::Runtime::ASM::addi(context->r4, context->r29, 0x14);
/*801618BC 0015E6BC*/ PPC::Runtime::ASM::addi(context->r5, context->r30, 0xac);
/*801618C0 0015E6C0*/ PPC::Runtime::ASM::li(context->r6, 0x0);
/*801618C4 0015E6C4*/ PPC::Runtime::ASM::crclr(context->cr1eq);
/*801618C8 0015E6C8*/ PPC::Runtime::ASM::bl(fn_80059520);
/*801618CC 0015E6CC*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r31));
/*801618D0 0015E6D0*/ PPC::Runtime::ASM::addi(context->r4, context->r29, 0x18);
/*801618D4 0015E6D4*/ PPC::Runtime::ASM::addi(context->r5, context->r30, 0xd0);
/*801618D8 0015E6D8*/ PPC::Runtime::ASM::li(context->r6, 0x0);
/*801618DC 0015E6DC*/ PPC::Runtime::ASM::crclr(context->cr1eq);
/*801618E0 0015E6E0*/ PPC::Runtime::ASM::bl(fn_80059520);
/*801618E4 0015E6E4*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x24, context->r1));
/*801618E8 0015E6E8*/ PPC::Runtime::ASM::lwz(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x1c, context->r1));
/*801618EC 0015E6EC*/ PPC::Runtime::ASM::lwz(context->r30, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x18, context->r1));
/*801618F0 0015E6F0*/ PPC::Runtime::ASM::lwz(context->r29, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*801618F4 0015E6F4*/ PPC::Runtime::ASM::mtlr(context->r0);
/*801618F8 0015E6F8*/ PPC::Runtime::ASM::addi(context->r1, context->r1, 0x20);
/*801618FC 0015E6FC*/ PPC::Runtime::ASM::blr();
}