//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following
#include "fn_801A08F0.hpp"
#include "fn_800638F8.hpp"
#include "fn_8019A644.hpp"
#include "fn_8019BFB4.hpp"
#include "fn_AS_Damage2?.hpp"
#include "fn_80193500.hpp"
#include "fn_80193500.hpp"



void fn_801A35EC(PPC::Runtime::GCContext* context)
{
/*801A35EC 001A03EC*/ PPC::Runtime::ASM::stwu(context->r1, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x20, context->r1));
/*801A35F0 001A03F0*/ PPC::Runtime::ASM::mflr(context->r0);
/*801A35F4 001A03F4*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x24, context->r1));
/*801A35F8 001A03F8*/ PPC::Runtime::ASM::stw(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x1c, context->r1));
/*801A35FC 001A03FC*/ PPC::Runtime::ASM::mr(context->r31, context->r3);
/*801A3600 001A0400*/ PPC::Runtime::ASM::lwz(context->r4, STRUCT_BYTE4_COUNT_1805DD814 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*801A3604 001A0404*/ PPC::Runtime::ASM::lfs(context->f1, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x268, context->r4));
/*801A3608 001A0408*/ PPC::Runtime::ASM::bl(fn_801A08F0);
/*801A360C 001A040C*/ PPC::Runtime::ASM::stw(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xa44, context->r31));
/*801A3610 001A0410*/ PPC::Runtime::ASM::li(context->r3, 0x3);
/*801A3614 001A0414*/ PPC::Runtime::ASM::li(context->r0, 0x0);
/*801A3618 001A0418*/ PPC::Runtime::ASM::lfs(context->f1, STRUCT_FLOAT_COUNT_1805E12B8 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*801A361C 001A041C*/ PPC::Runtime::ASM::stb(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xa41, context->r31));
/*801A3620 001A0420*/ PPC::Runtime::ASM::addi(context->r3, context->r1, 0x8);
/*801A3624 001A0424*/ PPC::Runtime::ASM::addi(context->r4, context->r31, 0x33c);
/*801A3628 001A0428*/ PPC::Runtime::ASM::stb(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xa42, context->r31));
/*801A362C 001A042C*/ PPC::Runtime::ASM::lwz(context->r6, STRUCT_BYTE4_COUNT_1805DD814 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*801A3630 001A0430*/ PPC::Runtime::ASM::lwz(context->r5, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x324, context->r31));
/*801A3634 001A0434*/ PPC::Runtime::ASM::lfs(context->f2, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x268, context->r6));
/*801A3638 001A0438*/ PPC::Runtime::ASM::lfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xe4, context->r6));
/*801A363C 001A043C*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x328, context->r31));
/*801A3640 001A0440*/ PPC::Runtime::ASM::fmuls(context->f4, context->f2, context->f0);
/*801A3644 001A0444*/ PPC::Runtime::ASM::stw(context->r5, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r1));
/*801A3648 001A0448*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r1));
/*801A364C 001A044C*/ PPC::Runtime::ASM::lfs(context->f2, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r1));
/*801A3650 001A0450*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x32c, context->r31));
/*801A3654 001A0454*/ PPC::Runtime::ASM::lfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r1));
/*801A3658 001A0458*/ PPC::Runtime::ASM::fmuls(context->f3, context->f2, context->f4);
/*801A365C 001A045C*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x10, context->r1));
/*801A3660 001A0460*/ PPC::Runtime::ASM::fmuls(context->f2, context->f0, context->f4);
/*801A3664 001A0464*/ PPC::Runtime::ASM::lfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x10, context->r1));
/*801A3668 001A0468*/ PPC::Runtime::ASM::stfs(context->f3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r1));
/*801A366C 001A046C*/ PPC::Runtime::ASM::fmuls(context->f0, context->f0, context->f4);
/*801A3670 001A0470*/ PPC::Runtime::ASM::stfs(context->f2, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r1));
/*801A3674 001A0474*/ PPC::Runtime::ASM::stfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x10, context->r1));
/*801A3678 001A0478*/ PPC::Runtime::ASM::lfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x26c, context->r6));
/*801A367C 001A047C*/ PPC::Runtime::ASM::fneg(context->f0, context->f0);
/*801A3680 001A0480*/ PPC::Runtime::ASM::fmuls(context->f1, context->f1, context->f0);
/*801A3684 001A0484*/ PPC::Runtime::ASM::bl(fn_800638F8);
/*801A3688 001A0488*/ PPC::Runtime::ASM::lwz(context->r4, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r1));
/*801A368C 001A048C*/ PPC::Runtime::ASM::mr(context->r3, context->r31);
/*801A3690 001A0490*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r1));
/*801A3694 001A0494*/ PPC::Runtime::ASM::stw(context->r4, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x5d0, context->r31));
/*801A3698 001A0498*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x5d4, context->r31));
/*801A369C 001A049C*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x10, context->r1));
/*801A36A0 001A04A0*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x5d8, context->r31));
/*801A36A4 001A04A4*/ PPC::Runtime::ASM::bl(fn_8019A644);
/*801A36A8 001A04A8*/ PPC::Runtime::ASM::mr(context->r3, context->r31);
/*801A36AC 001A04AC*/ PPC::Runtime::ASM::li(context->r4, 0x4);
/*801A36B0 001A04B0*/ PPC::Runtime::ASM::li(context->r5, 0x0);
/*801A36B4 001A04B4*/ PPC::Runtime::ASM::bl(fn_8019BFB4);
/*801A36B8 001A04B8*/ PPC::Runtime::ASM::mr(context->r3, context->r31);
/*801A36BC 001A04BC*/ PPC::Runtime::ASM::li(context->r4, 0xd);
/*801A36C0 001A04C0*/ PPC::Runtime::ASM::li(context->r5, 0x58);
/*801A36C4 001A04C4*/ PPC::Runtime::ASM::bl(fn_AS_Damage2?);
/*801A36C8 001A04C8*/ PPC::Runtime::ASM::mr(context->r3, context->r31);
/*801A36CC 001A04CC*/ PPC::Runtime::ASM::li(context->r4, 0x2);
/*801A36D0 001A04D0*/ PPC::Runtime::ASM::li(context->r5, 0x0);
/*801A36D4 001A04D4*/ PPC::Runtime::ASM::li(context->r6, 0x0);
/*801A36D8 001A04D8*/ PPC::Runtime::ASM::bl(fn_80193500);
/*801A36DC 001A04DC*/ PPC::Runtime::ASM::mr(context->r3, context->r31);
/*801A36E0 001A04E0*/ PPC::Runtime::ASM::li(context->r4, 0x3);
/*801A36E4 001A04E4*/ PPC::Runtime::ASM::li(context->r5, 0x0);
/*801A36E8 001A04E8*/ PPC::Runtime::ASM::li(context->r6, 0x1);
/*801A36EC 001A04EC*/ PPC::Runtime::ASM::bl(fn_80193500);
/*801A36F0 001A04F0*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x24, context->r1));
/*801A36F4 001A04F4*/ PPC::Runtime::ASM::lwz(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x1c, context->r1));
/*801A36F8 001A04F8*/ PPC::Runtime::ASM::mtlr(context->r0);
/*801A36FC 001A04FC*/ PPC::Runtime::ASM::addi(context->r1, context->r1, 0x20);
/*801A3700 001A0500*/ PPC::Runtime::ASM::blr();
}