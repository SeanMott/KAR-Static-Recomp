//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following
#include "fn_80191B4C.hpp"
#include "fn_8020407C.hpp"
#include "fn_80236C40.hpp"



void fn_80224770(PPC::Runtime::GCContext* context)
{
/*80224770 00221570*/ PPC::Runtime::ASM::stwu(context->r1, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x20, context->r1));
/*80224774 00221574*/ PPC::Runtime::ASM::mflr(context->r0);
/*80224778 00221578*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x24, context->r1));
/*8022477C 0022157C*/ PPC::Runtime::ASM::stw(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x1c, context->r1));
/*80224780 00221580*/ PPC::Runtime::ASM::mr(context->r31, context->r3);
/*80224784 00221584*/ PPC::Runtime::ASM::lwz(context->r4, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x4, context->r4));
/*80224788 00221588*/ PPC::Runtime::ASM::lhz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r4));
/*8022478C 0022158C*/ PPC::Runtime::ASM::cmpwi(context->r0, 0x15);
/*80224790 00221590*/ PPC::Runtime::ASM::beq(.L_802247B4);
/*80224794 00221594*/ PPC::Runtime::ASM::bge(.L_802247C4);
/*80224798 00221598*/ PPC::Runtime::ASM::cmpwi(context->r0, 0x11);
/*8022479C 0022159C*/ PPC::Runtime::ASM::beq(.L_802247A4);
/*802247A0 002215A0*/ PPC::Runtime::ASM::b(.L_802247C4);
RUNTIME_PPC_JUMP_LABEL(.L_802247A4, 0x802247A4) //this is a jump label
/*802247A4 002215A4*/ PPC::Runtime::ASM::mr(context->r3, context->r4);
/*802247A8 002215A8*/ PPC::Runtime::ASM::addi(context->r4, context->r1, 0x8);
/*802247AC 002215AC*/ PPC::Runtime::ASM::bl(fn_80191B4C);
/*802247B0 002215B0*/ PPC::Runtime::ASM::b(.L_802247D4);
RUNTIME_PPC_JUMP_LABEL(.L_802247B4, 0x802247B4) //this is a jump label
/*802247B4 002215B4*/ PPC::Runtime::ASM::mr(context->r3, context->r4);
/*802247B8 002215B8*/ PPC::Runtime::ASM::addi(context->r4, context->r1, 0x8);
/*802247BC 002215BC*/ PPC::Runtime::ASM::bl(fn_8020407C);
/*802247C0 002215C0*/ PPC::Runtime::ASM::b(.L_802247D4);
RUNTIME_PPC_JUMP_LABEL(.L_802247C4, 0x802247C4) //this is a jump label
/*802247C4 002215C4*/ PPC::Runtime::ASM::lfs(context->f0, STRUCT_FLOAT_COUNT_1805E2910 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*802247C8 002215C8*/ PPC::Runtime::ASM::stfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x10, context->r1));
/*802247CC 002215CC*/ PPC::Runtime::ASM::stfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r1));
/*802247D0 002215D0*/ PPC::Runtime::ASM::stfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r1));
RUNTIME_PPC_JUMP_LABEL(.L_802247D4, 0x802247D4) //this is a jump label
/*802247D4 002215D4*/ PPC::Runtime::ASM::lis(context->r3, 0x4);
/*802247D8 002215D8*/ PPC::Runtime::ASM::addi(context->r7, context->r31, 0xac);
/*802247DC 002215DC*/ PPC::Runtime::ASM::subi(context->r4, context->r3, 0x5661);
/*802247E0 002215E0*/ PPC::Runtime::ASM::addi(context->r8, context->r1, 0x8);
/*802247E4 002215E4*/ PPC::Runtime::ASM::li(context->r3, 0x0);
/*802247E8 002215E8*/ PPC::Runtime::ASM::li(context->r5, 0x0);
/*802247EC 002215EC*/ PPC::Runtime::ASM::li(context->r6, 0x68);
/*802247F0 002215F0*/ PPC::Runtime::ASM::crclr(context->cr1eq);
/*802247F4 002215F4*/ PPC::Runtime::ASM::bl(fn_80236C40);
/*802247F8 002215F8*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x24, context->r1));
/*802247FC 002215FC*/ PPC::Runtime::ASM::li(context->r3, 0x1);
/*80224800 00221600*/ PPC::Runtime::ASM::lwz(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x1c, context->r1));
/*80224804 00221604*/ PPC::Runtime::ASM::mtlr(context->r0);
/*80224808 00221608*/ PPC::Runtime::ASM::addi(context->r1, context->r1, 0x20);
/*8022480C 0022160C*/ PPC::Runtime::ASM::blr();
}