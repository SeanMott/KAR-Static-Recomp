//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following
#include "fn_801390E0.hpp"
#include "fn_SND_fn_vSynchroSound.hpp"
#include "fn_801391C8.hpp"
#include "fn_801832C4.hpp"
#include "fn_80183844.hpp"
#include "fn_8018433C.hpp"
#include "fn_80184828.hpp"
#include "fn_80184C0C.hpp"
#include "fn_80184E90.hpp"
#include "fn_801850A8.hpp"
#include "fn_80185358.hpp"
#include "fn_80185654.hpp"
#include "fn_8017C90C.hpp"
#include "fn_8017C990.hpp"
#include "fn_8017CA38.hpp"
#include "fn_8017C9C8.hpp"
#include "fn_8017CA00.hpp"
#include "fn_80184530.hpp"
#include "fn_80072AA0.hpp"
#include "fn_80072A68.hpp"
#include "fn_8023295C.hpp"
#include "fn_80277748.hpp"
#include "fn_80078D24.hpp"



void fn_8004F77C(PPC::Runtime::GCContext* context)
{
/*8004F77C 0004C57C*/ PPC::Runtime::ASM::stwu(context->r1, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x10, context->r1));
/*8004F780 0004C580*/ PPC::Runtime::ASM::mflr(context->r0);
/*8004F784 0004C584*/ PPC::Runtime::ASM::lis(context->r3, lbl_80537430 @ Get_MemoryOffset_HighBit);
/*8004F788 0004C588*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*8004F78C 0004C58C*/ PPC::Runtime::ASM::stw(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r1));
/*8004F790 0004C590*/ PPC::Runtime::ASM::addi(context->r31, context->r3, lbl_80537430 @ Get_MemoryOffset_LowBit);
/*8004F794 0004C594*/ PPC::Runtime::ASM::bl(fn_801390E0);
/*8004F798 0004C598*/ PPC::Runtime::ASM::bl(fn_SND_fn_vSynchroSound);
/*8004F79C 0004C59C*/ PPC::Runtime::ASM::bl(fn_801391C8);
/*8004F7A0 0004C5A0*/ PPC::Runtime::ASM::bl(fn_801832C4);
/*8004F7A4 0004C5A4*/ PPC::Runtime::ASM::bl(fn_80183844);
/*8004F7A8 0004C5A8*/ PPC::Runtime::ASM::bl(fn_8018433C);
/*8004F7AC 0004C5AC*/ PPC::Runtime::ASM::bl(fn_80184828);
/*8004F7B0 0004C5B0*/ PPC::Runtime::ASM::bl(fn_80184C0C);
/*8004F7B4 0004C5B4*/ PPC::Runtime::ASM::bl(fn_80184E90);
/*8004F7B8 0004C5B8*/ PPC::Runtime::ASM::bl(fn_801850A8);
/*8004F7BC 0004C5BC*/ PPC::Runtime::ASM::bl(fn_80185358);
/*8004F7C0 0004C5C0*/ PPC::Runtime::ASM::bl(fn_80185654);
/*8004F7C4 0004C5C4*/ PPC::Runtime::ASM::li(context->r3, 0x7);
/*8004F7C8 0004C5C8*/ PPC::Runtime::ASM::bl(fn_8017C90C);
/*8004F7CC 0004C5CC*/ PPC::Runtime::ASM::li(context->r3, 0x7);
/*8004F7D0 0004C5D0*/ PPC::Runtime::ASM::bl(fn_8017C990);
/*8004F7D4 0004C5D4*/ PPC::Runtime::ASM::li(context->r3, 0x7);
/*8004F7D8 0004C5D8*/ PPC::Runtime::ASM::bl(fn_8017CA38);
/*8004F7DC 0004C5DC*/ PPC::Runtime::ASM::li(context->r3, 0x7);
/*8004F7E0 0004C5E0*/ PPC::Runtime::ASM::bl(fn_8017C9C8);
/*8004F7E4 0004C5E4*/ PPC::Runtime::ASM::li(context->r3, 0x7);
/*8004F7E8 0004C5E8*/ PPC::Runtime::ASM::bl(fn_8017CA00);
/*8004F7EC 0004C5EC*/ PPC::Runtime::ASM::bl(fn_80184530);
/*8004F7F0 0004C5F0*/ PPC::Runtime::ASM::bl(fn_80072AA0);
/*8004F7F4 0004C5F4*/ PPC::Runtime::ASM::bl(fn_80072A68);
/*8004F7F8 0004C5F8*/ PPC::Runtime::ASM::bl(fn_8023295C);
/*8004F7FC 0004C5FC*/ PPC::Runtime::ASM::bl(fn_80277748);
/*8004F800 0004C600*/ PPC::Runtime::ASM::lis(context->r3, lbl_80537430 @ Get_MemoryOffset_HighBit);
/*8004F804 0004C604*/ PPC::Runtime::ASM::addi(context->r3, context->r3, lbl_80537430 @ Get_MemoryOffset_LowBit);
/*8004F808 0004C608*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r3));
/*8004F80C 0004C60C*/ PPC::Runtime::ASM::cmpwi(context->r0, 0x2);
/*8004F810 0004C610*/ PPC::Runtime::ASM::bne(.L_8004F828);
/*8004F814 0004C614*/ PPC::Runtime::ASM::bl(fn_80078D24);
/*8004F818 0004C618*/ PPC::Runtime::ASM::cmpwi(context->r3, 0x0);
/*8004F81C 0004C61C*/ PPC::Runtime::ASM::bne(.L_8004F828);
/*8004F820 0004C620*/ PPC::Runtime::ASM::li(context->r0, 0x1);
/*8004F824 0004C624*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r31));
RUNTIME_PPC_JUMP_LABEL(.L_8004F828, 0x8004F828) //this is a jump label
/*8004F828 0004C628*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*8004F82C 0004C62C*/ PPC::Runtime::ASM::lwz(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r1));
/*8004F830 0004C630*/ PPC::Runtime::ASM::mtlr(context->r0);
/*8004F834 0004C634*/ PPC::Runtime::ASM::addi(context->r1, context->r1, 0x10);
/*8004F838 0004C638*/ PPC::Runtime::ASM::blr();
}