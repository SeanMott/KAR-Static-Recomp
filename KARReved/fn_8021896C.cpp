//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following
#include "fn_80200D10.hpp"
#include "fn_801FC398.hpp"
#include "fn_8021A350.hpp"
#include "fn_801FC398.hpp"
#include "fn_8021A350.hpp"



void fn_8021896C(PPC::Runtime::GCContext* context)
{
/*8021896C 0021576C*/ PPC::Runtime::ASM::stwu(context->r1, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x10, context->r1));
/*80218970 00215770*/ PPC::Runtime::ASM::mflr(context->r0);
/*80218974 00215774*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*80218978 00215778*/ PPC::Runtime::ASM::stw(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r1));
/*8021897C 0021577C*/ PPC::Runtime::ASM::mr(context->r31, context->r3);
/*80218980 00215780*/ PPC::Runtime::ASM::bl(fn_80200D10);
/*80218984 00215784*/ PPC::Runtime::ASM::cmpwi(context->r3, 0x0);
/*80218988 00215788*/ PPC::Runtime::ASM::beq(.L_80218A10);
/*8021898C 0021578C*/ PPC::Runtime::ASM::li(context->r3, 0xc);
/*80218990 00215790*/ PPC::Runtime::ASM::bl(fn_HSD_Randi);
/*80218994 00215794*/ PPC::Runtime::ASM::cmpwi(context->r3, 0x7);
/*80218998 00215798*/ PPC::Runtime::ASM::beq(.L_802189E0);
/*8021899C 0021579C*/ PPC::Runtime::ASM::bge(.L_80218A10);
/*802189A0 002157A0*/ PPC::Runtime::ASM::cmpwi(context->r3, 0x3);
/*802189A4 002157A4*/ PPC::Runtime::ASM::beq(.L_802189AC);
/*802189A8 002157A8*/ PPC::Runtime::ASM::b(.L_80218A10);
RUNTIME_PPC_JUMP_LABEL(.L_802189AC, 0x802189AC) //this is a jump label
/*802189AC 002157AC*/ PPC::Runtime::ASM::lfs(context->f1, STRUCT_FLOAT_COUNT_1805E2688 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*802189B0 002157B0*/ PPC::Runtime::ASM::mr(context->r3, context->r31);
/*802189B4 002157B4*/ PPC::Runtime::ASM::lfs(context->f2, STRUCT_FLOAT_COUNT_1805E268C @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*802189B8 002157B8*/ PPC::Runtime::ASM::li(context->r4, 0x11);
/*802189BC 002157BC*/ PPC::Runtime::ASM::fmr(context->f3, context->f1);
/*802189C0 002157C0*/ PPC::Runtime::ASM::li(context->r5, 0x0);
/*802189C4 002157C4*/ PPC::Runtime::ASM::bl(fn_801FC398);
/*802189C8 002157C8*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x4, context->r31));
/*802189CC 002157CC*/ PPC::Runtime::ASM::cmplwi(context->r3, 0x0);
/*802189D0 002157D0*/ PPC::Runtime::ASM::beq(.L_80218A10);
/*802189D4 002157D4*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x2c, context->r3));
/*802189D8 002157D8*/ PPC::Runtime::ASM::bl(fn_8021A350);
/*802189DC 002157DC*/ PPC::Runtime::ASM::b(.L_80218A10);
RUNTIME_PPC_JUMP_LABEL(.L_802189E0, 0x802189E0) //this is a jump label
/*802189E0 002157E0*/ PPC::Runtime::ASM::lfs(context->f1, STRUCT_FLOAT_COUNT_1805E2688 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*802189E4 002157E4*/ PPC::Runtime::ASM::mr(context->r3, context->r31);
/*802189E8 002157E8*/ PPC::Runtime::ASM::lfs(context->f2, STRUCT_FLOAT_COUNT_1805E268C @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*802189EC 002157EC*/ PPC::Runtime::ASM::li(context->r4, 0x12);
/*802189F0 002157F0*/ PPC::Runtime::ASM::fmr(context->f3, context->f1);
/*802189F4 002157F4*/ PPC::Runtime::ASM::li(context->r5, 0x0);
/*802189F8 002157F8*/ PPC::Runtime::ASM::bl(fn_801FC398);
/*802189FC 002157FC*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x4, context->r31));
/*80218A00 00215800*/ PPC::Runtime::ASM::cmplwi(context->r3, 0x0);
/*80218A04 00215804*/ PPC::Runtime::ASM::beq(.L_80218A10);
/*80218A08 00215808*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x2c, context->r3));
/*80218A0C 0021580C*/ PPC::Runtime::ASM::bl(fn_8021A350);
RUNTIME_PPC_JUMP_LABEL(.L_80218A10, 0x80218A10) //this is a jump label
/*80218A10 00215810*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*80218A14 00215814*/ PPC::Runtime::ASM::lwz(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r1));
/*80218A18 00215818*/ PPC::Runtime::ASM::mtlr(context->r0);
/*80218A1C 0021581C*/ PPC::Runtime::ASM::addi(context->r1, context->r1, 0x10);
/*80218A20 00215820*/ PPC::Runtime::ASM::blr();
}