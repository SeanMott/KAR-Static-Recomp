//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following
#include "fn_800D1F3C.hpp"
#include "fn_800D50F8.hpp"
#include "fn_801CAA40.hpp"
#include "fn_800D4FB8.hpp"
#include "fn_801CAA40.hpp"
#include "fn_8022CC80.hpp"
#include "fn_801CB50C.hpp"
#include "fn_801C8E50.hpp"
#include "fn_801CA294.hpp"
#include "fn_801CA00C.hpp"



void fn_801E6718(PPC::Runtime::GCContext* context)
{
/*801E6718 001E3518*/ PPC::Runtime::ASM::stwu(context->r1, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x40, context->r1));
/*801E671C 001E351C*/ PPC::Runtime::ASM::mflr(context->r0);
/*801E6720 001E3520*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x44, context->r1));
/*801E6724 001E3524*/ PPC::Runtime::ASM::stw(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x3c, context->r1));
/*801E6728 001E3528*/ PPC::Runtime::ASM::mr(context->r31, context->r3);
/*801E672C 001E352C*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x1b48, context->r3));
/*801E6730 001E3530*/ PPC::Runtime::ASM::bl(fn_800D1F3C);
/*801E6734 001E3534*/ PPC::Runtime::ASM::cmpwi(context->r3, 0x0);
/*801E6738 001E3538*/ PPC::Runtime::ASM::bne(.L_801E6754);
/*801E673C 001E353C*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x1b48, context->r31));
/*801E6740 001E3540*/ PPC::Runtime::ASM::addi(context->r4, context->r1, 0x20);
/*801E6744 001E3544*/ PPC::Runtime::ASM::addi(context->r5, context->r1, 0x14);
/*801E6748 001E3548*/ PPC::Runtime::ASM::addi(context->r6, context->r1, 0x8);
/*801E674C 001E354C*/ PPC::Runtime::ASM::bl(fn_800D50F8);
/*801E6750 001E3550*/ PPC::Runtime::ASM::b(.L_801E6774);
RUNTIME_PPC_JUMP_LABEL(.L_801E6754, 0x801E6754) //this is a jump label
/*801E6754 001E3554*/ PPC::Runtime::ASM::mr(context->r3, context->r31);
/*801E6758 001E3558*/ PPC::Runtime::ASM::bl(fn_801CAA40);
/*801E675C 001E355C*/ PPC::Runtime::ASM::mr(context->r4, context->r3);
/*801E6760 001E3560*/ PPC::Runtime::ASM::addi(context->r3, context->r31, 0x1b4c);
/*801E6764 001E3564*/ PPC::Runtime::ASM::addi(context->r5, context->r1, 0x20);
/*801E6768 001E3568*/ PPC::Runtime::ASM::addi(context->r6, context->r1, 0x14);
/*801E676C 001E356C*/ PPC::Runtime::ASM::addi(context->r7, context->r1, 0x8);
/*801E6770 001E3570*/ PPC::Runtime::ASM::bl(fn_800D4FB8);
RUNTIME_PPC_JUMP_LABEL(.L_801E6774, 0x801E6774) //this is a jump label
/*801E6774 001E3574*/ PPC::Runtime::ASM::mr(context->r3, context->r31);
/*801E6778 001E3578*/ PPC::Runtime::ASM::bl(fn_801CAA40);
/*801E677C 001E357C*/ PPC::Runtime::ASM::li(context->r4, 0x0);
/*801E6780 001E3580*/ PPC::Runtime::ASM::bl(fn_8022CC80);
/*801E6784 001E3584*/ PPC::Runtime::ASM::mr(context->r3, context->r31);
/*801E6788 001E3588*/ PPC::Runtime::ASM::addi(context->r4, context->r1, 0x20);
/*801E678C 001E358C*/ PPC::Runtime::ASM::addi(context->r5, context->r1, 0x14);
/*801E6790 001E3590*/ PPC::Runtime::ASM::addi(context->r6, context->r1, 0x8);
/*801E6794 001E3594*/ PPC::Runtime::ASM::bl(fn_801CB50C);
/*801E6798 001E3598*/ PPC::Runtime::ASM::mr(context->r3, context->r31);
/*801E679C 001E359C*/ PPC::Runtime::ASM::bl(fn_801C8E50);
/*801E67A0 001E35A0*/ PPC::Runtime::ASM::mr(context->r3, context->r31);
/*801E67A4 001E35A4*/ PPC::Runtime::ASM::bl(fn_801CA294);
/*801E67A8 001E35A8*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x10, context->r31));
/*801E67AC 001E35AC*/ PPC::Runtime::ASM::li(context->r3, lbl_805D6F98 @ Get_MemoryOffset_SDA21);
/*801E67B0 001E35B0*/ PPC::Runtime::ASM::slwi(context->r0, context->r0, 2);
/*801E67B4 001E35B4*/ PPC::Runtime::ASM::lwzx(context->r3, context->r3, context->r0);
/*801E67B8 001E35B8*/ PPC::Runtime::ASM::lwz(context->r12, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x70, context->r3));
/*801E67BC 001E35BC*/ PPC::Runtime::ASM::cmplwi(context->r12, 0x0);
/*801E67C0 001E35C0*/ PPC::Runtime::ASM::beq(.L_801E67D0);
/*801E67C4 001E35C4*/ PPC::Runtime::ASM::mr(context->r3, context->r31);
/*801E67C8 001E35C8*/ PPC::Runtime::ASM::mtctr(context->r12);
/*801E67CC 001E35CC*/ PPC::Runtime::ASM::bctrl();
RUNTIME_PPC_JUMP_LABEL(.L_801E67D0, 0x801E67D0) //this is a jump label
/*801E67D0 001E35D0*/ PPC::Runtime::ASM::mr(context->r3, context->r31);
/*801E67D4 001E35D4*/ PPC::Runtime::ASM::bl(fn_801CA00C);
/*801E67D8 001E35D8*/ PPC::Runtime::ASM::lbz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc3a, context->r31));
/*801E67DC 001E35DC*/ PPC::Runtime::ASM::li(context->r4, 0x1);
/*801E67E0 001E35E0*/ PPC::Runtime::ASM::rlwimi(context->r0, context->r4, 0, 31, 31);
/*801E67E4 001E35E4*/ PPC::Runtime::ASM::stb(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc3a, context->r31));
/*801E67E8 001E35E8*/ PPC::Runtime::ASM::lbz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc31, context->r31));
/*801E67EC 001E35EC*/ PPC::Runtime::ASM::rlwimi(context->r0, context->r4, 7, 24, 24);
/*801E67F0 001E35F0*/ PPC::Runtime::ASM::stb(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc31, context->r31));
/*801E67F4 001E35F4*/ PPC::Runtime::ASM::lbz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc39, context->r31));
/*801E67F8 001E35F8*/ PPC::Runtime::ASM::extrwi(context->r0, context->r3, 2, 24);
/*801E67FC 001E35FC*/ PPC::Runtime::ASM::ori(context->r0, context->r0, 0x1);
/*801E6800 001E3600*/ PPC::Runtime::ASM::rlwimi(context->r3, context->r0, 6, 24, 25);
/*801E6804 001E3604*/ PPC::Runtime::ASM::stb(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc39, context->r31));
/*801E6808 001E3608*/ PPC::Runtime::ASM::lbz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc35, context->r31));
/*801E680C 001E360C*/ PPC::Runtime::ASM::rlwimi(context->r0, context->r4, 6, 25, 25);
/*801E6810 001E3610*/ PPC::Runtime::ASM::stb(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc35, context->r31));
/*801E6814 001E3614*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x44, context->r1));
/*801E6818 001E3618*/ PPC::Runtime::ASM::lwz(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x3c, context->r1));
/*801E681C 001E361C*/ PPC::Runtime::ASM::mtlr(context->r0);
/*801E6820 001E3620*/ PPC::Runtime::ASM::addi(context->r1, context->r1, 0x40);
/*801E6824 001E3624*/ PPC::Runtime::ASM::blr();
}