//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following
#include "fn_80324560.hpp"
#include "fn_8037B028.hpp"
#include "fn_8037B028.hpp"
#include "fn_80379398.hpp"



void fn_803346E4(PPC::Runtime::GCContext* context)
{
/*803346E4 003314E4*/ PPC::Runtime::ASM::stwu(context->r1, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x20, context->r1));
/*803346E8 003314E8*/ PPC::Runtime::ASM::mflr(context->r0);
/*803346EC 003314EC*/ PPC::Runtime::ASM::lis(context->r5, lbl_804E3808 @ Get_MemoryOffset_HighBit);
/*803346F0 003314F0*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x24, context->r1));
/*803346F4 003314F4*/ PPC::Runtime::ASM::stw(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x1c, context->r1));
/*803346F8 003314F8*/ PPC::Runtime::ASM::mr(context->r31, context->r4);
/*803346FC 003314FC*/ PPC::Runtime::ASM::stw(context->r30, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x18, context->r1));
/*80334700 00331500*/ PPC::Runtime::ASM::mr(context->r30, context->r3);
/*80334704 00331504*/ PPC::Runtime::ASM::stw(context->r29, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*80334708 00331508*/ PPC::Runtime::ASM::addi(context->r29, context->r5, lbl_804E3808 @ Get_MemoryOffset_LowBit);
/*8033470C 0033150C*/ PPC::Runtime::ASM::stw(context->r28, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x10, context->r1));
/*80334710 00331510*/ PPC::Runtime::ASM::bl(fn_80324560);
/*80334714 00331514*/ PPC::Runtime::ASM::addi(context->r4, context->r29, 0x1104);
/*80334718 00331518*/ PPC::Runtime::ASM::lis(context->r3, lbl_804F4E38 @ Get_MemoryOffset_HighBit);
/*8033471C 0033151C*/ PPC::Runtime::ASM::stw(context->r4, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r30));
/*80334720 00331520*/ PPC::Runtime::ASM::addi(context->r0, context->r4, 0x28);
/*80334724 00331524*/ PPC::Runtime::ASM::addi(context->r4, context->r3, lbl_804F4E38 @ Get_MemoryOffset_LowBit);
/*80334728 00331528*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x58, context->r31));
/*8033472C 0033152C*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r30));
/*80334730 00331530*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x5c, context->r31));
/*80334734 00331534*/ PPC::Runtime::ASM::stw(context->r4, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x54, context->r30));
/*80334738 00331538*/ PPC::Runtime::ASM::stw(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x58, context->r30));
/*8033473C 0033153C*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x5c, context->r30));
/*80334740 00331540*/ PPC::Runtime::ASM::lwz(context->r4, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x58, context->r30));
/*80334744 00331544*/ PPC::Runtime::ASM::cmplwi(context->r4, 0x0);
/*80334748 00331548*/ PPC::Runtime::ASM::beq(.L_80334774);
/*8033474C 0033154C*/ PPC::Runtime::ASM::lhz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x4, context->r4));
/*80334750 00331550*/ PPC::Runtime::ASM::addi(context->r0, context->r3, 0x1);
/*80334754 00331554*/ PPC::Runtime::ASM::sth(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x4, context->r4));
/*80334758 00331558*/ PPC::Runtime::ASM::lhz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x4, context->r4));
/*8033475C 0033155C*/ PPC::Runtime::ASM::cmplwi(context->r0, 0xffff);
/*80334760 00331560*/ PPC::Runtime::ASM::bne(.L_80334774);
/*80334764 00331564*/ PPC::Runtime::ASM::addi(context->r3, context->r29, 0x16e4);
/*80334768 00331568*/ PPC::Runtime::ASM::addi(context->r5, context->r29, 0x16f0);
/*8033476C 0033156C*/ PPC::Runtime::ASM::li(context->r4, 0x5d);
/*80334770 00331570*/ PPC::Runtime::ASM::bl(fn___assert);
RUNTIME_PPC_JUMP_LABEL(.L_80334774, 0x80334774) //this is a jump label
/*80334774 00331574*/ PPC::Runtime::ASM::lwz(context->r4, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x60, context->r31));
/*80334778 00331578*/ PPC::Runtime::ASM::lis(context->r3, lbl_804BDCBC @ Get_MemoryOffset_HighBit);
/*8033477C 0033157C*/ PPC::Runtime::ASM::addi(context->r29, context->r30, 0x64);
/*80334780 00331580*/ PPC::Runtime::ASM::li(context->r0, 0x0);
/*80334784 00331584*/ PPC::Runtime::ASM::stw(context->r4, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x60, context->r30));
/*80334788 00331588*/ PPC::Runtime::ASM::addi(context->r4, context->r3, lbl_804BDCBC @ Get_MemoryOffset_LowBit);
/*8033478C 0033158C*/ PPC::Runtime::ASM::mr(context->r3, context->r29);
/*80334790 00331590*/ PPC::Runtime::ASM::stw(context->r4, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x64, context->r30));
/*80334794 00331594*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x68, context->r30));
/*80334798 00331598*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x6c, context->r30));
/*8033479C 0033159C*/ PPC::Runtime::ASM::lwz(context->r12, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r29));
/*803347A0 003315A0*/ PPC::Runtime::ASM::lwz(context->r12, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x10, context->r12));
/*803347A4 003315A4*/ PPC::Runtime::ASM::mtctr(context->r12);
/*803347A8 003315A8*/ PPC::Runtime::ASM::bctrl();
/*803347AC 003315AC*/ PPC::Runtime::ASM::lis(context->r4, lbl_804BDD08 @ Get_MemoryOffset_HighBit);
/*803347B0 003315B0*/ PPC::Runtime::ASM::lis(context->r3, lbl_804BDF2C @ Get_MemoryOffset_HighBit);
/*803347B4 003315B4*/ PPC::Runtime::ASM::addi(context->r0, context->r4, lbl_804BDD08 @ Get_MemoryOffset_LowBit);
/*803347B8 003315B8*/ PPC::Runtime::ASM::addi(context->r28, context->r30, 0x94);
/*803347BC 003315BC*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r29));
/*803347C0 003315C0*/ PPC::Runtime::ASM::li(context->r5, 0x0);
/*803347C4 003315C4*/ PPC::Runtime::ASM::lfs(context->f2, STRUCT_FLOAT_COUNT_1805E4120 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*803347C8 003315C8*/ PPC::Runtime::ASM::li(context->r4, 0x1);
/*803347CC 003315CC*/ PPC::Runtime::ASM::lfs(context->f1, STRUCT_FLOAT_COUNT_1805E4124 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*803347D0 003315D0*/ PPC::Runtime::ASM::addi(context->r0, context->r3, lbl_804BDF2C @ Get_MemoryOffset_LowBit);
/*803347D4 003315D4*/ PPC::Runtime::ASM::stfs(context->f2, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r29));
/*803347D8 003315D8*/ PPC::Runtime::ASM::mr(context->r3, context->r28);
/*803347DC 003315DC*/ PPC::Runtime::ASM::lfs(context->f0, STRUCT_FLOAT_COUNT_1805E418C @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*803347E0 003315E0*/ PPC::Runtime::ASM::stfs(context->f2, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x10, context->r29));
/*803347E4 003315E4*/ PPC::Runtime::ASM::stfs(context->f2, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r29));
/*803347E8 003315E8*/ PPC::Runtime::ASM::stfs(context->f2, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x18, context->r29));
/*803347EC 003315EC*/ PPC::Runtime::ASM::stfs(context->f1, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x1c, context->r29));
/*803347F0 003315F0*/ PPC::Runtime::ASM::stfs(context->f2, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x20, context->r29));
/*803347F4 003315F4*/ PPC::Runtime::ASM::stfs(context->f1, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x24, context->r29));
/*803347F8 003315F8*/ PPC::Runtime::ASM::stfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x28, context->r29));
/*803347FC 003315FC*/ PPC::Runtime::ASM::stb(context->r5, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x2c, context->r29));
/*80334800 00331600*/ PPC::Runtime::ASM::stb(context->r4, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x2d, context->r29));
/*80334804 00331604*/ PPC::Runtime::ASM::stb(context->r5, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x2e, context->r29));
/*80334808 00331608*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x94, context->r30));
/*8033480C 0033160C*/ PPC::Runtime::ASM::stw(context->r5, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x98, context->r30));
/*80334810 00331610*/ PPC::Runtime::ASM::stw(context->r5, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x9c, context->r30));
/*80334814 00331614*/ PPC::Runtime::ASM::lwz(context->r12, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r28));
/*80334818 00331618*/ PPC::Runtime::ASM::lwz(context->r12, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x10, context->r12));
/*8033481C 0033161C*/ PPC::Runtime::ASM::mtctr(context->r12);
/*80334820 00331620*/ PPC::Runtime::ASM::bctrl();
/*80334824 00331624*/ PPC::Runtime::ASM::lis(context->r4, lbl_804BDF70 @ Get_MemoryOffset_HighBit);
/*80334828 00331628*/ PPC::Runtime::ASM::mr(context->r3, context->r28);
/*8033482C 0033162C*/ PPC::Runtime::ASM::addi(context->r0, context->r4, lbl_804BDF70 @ Get_MemoryOffset_LowBit);
/*80334830 00331630*/ PPC::Runtime::ASM::li(context->r4, -0x1);
/*80334834 00331634*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r28));
/*80334838 00331638*/ PPC::Runtime::ASM::li(context->r5, 0x0);
/*8033483C 0033163C*/ PPC::Runtime::ASM::li(context->r6, 0x0);
/*80334840 00331640*/ PPC::Runtime::ASM::li(context->r7, 0x0);
/*80334844 00331644*/ PPC::Runtime::ASM::li(context->r8, 0x0);
/*80334848 00331648*/ PPC::Runtime::ASM::bl(fn_8037B028);
/*8033484C 0033164C*/ PPC::Runtime::ASM::lis(context->r3, lbl_804BDF2C @ Get_MemoryOffset_HighBit);
/*80334850 00331650*/ PPC::Runtime::ASM::addi(context->r28, context->r30, 0xe0);
/*80334854 00331654*/ PPC::Runtime::ASM::addi(context->r3, context->r3, lbl_804BDF2C @ Get_MemoryOffset_LowBit);
/*80334858 00331658*/ PPC::Runtime::ASM::li(context->r0, 0x0);
/*8033485C 0033165C*/ PPC::Runtime::ASM::stw(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xe0, context->r30));
/*80334860 00331660*/ PPC::Runtime::ASM::mr(context->r3, context->r28);
/*80334864 00331664*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xe4, context->r30));
/*80334868 00331668*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xe8, context->r30));
/*8033486C 0033166C*/ PPC::Runtime::ASM::lwz(context->r12, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r28));
/*80334870 00331670*/ PPC::Runtime::ASM::lwz(context->r12, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x10, context->r12));
/*80334874 00331674*/ PPC::Runtime::ASM::mtctr(context->r12);
/*80334878 00331678*/ PPC::Runtime::ASM::bctrl();
/*8033487C 0033167C*/ PPC::Runtime::ASM::lis(context->r4, lbl_804BDF70 @ Get_MemoryOffset_HighBit);
/*80334880 00331680*/ PPC::Runtime::ASM::mr(context->r3, context->r28);
/*80334884 00331684*/ PPC::Runtime::ASM::addi(context->r0, context->r4, lbl_804BDF70 @ Get_MemoryOffset_LowBit);
/*80334888 00331688*/ PPC::Runtime::ASM::li(context->r4, -0x1);
/*8033488C 0033168C*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r28));
/*80334890 00331690*/ PPC::Runtime::ASM::li(context->r5, 0x0);
/*80334894 00331694*/ PPC::Runtime::ASM::li(context->r6, 0x0);
/*80334898 00331698*/ PPC::Runtime::ASM::li(context->r7, 0x0);
/*8033489C 0033169C*/ PPC::Runtime::ASM::li(context->r8, 0x0);
/*803348A0 003316A0*/ PPC::Runtime::ASM::bl(fn_8037B028);
/*803348A4 003316A4*/ PPC::Runtime::ASM::addi(context->r3, context->r30, 0x12c);
/*803348A8 003316A8*/ PPC::Runtime::ASM::bl(fn_80379398);
/*803348AC 003316AC*/ PPC::Runtime::ASM::lfs(context->f0, STRUCT_FLOAT_COUNT_1805E4120 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*803348B0 003316B0*/ PPC::Runtime::ASM::lis(context->r3, lbl_804BF4DC @ Get_MemoryOffset_HighBit);
/*803348B4 003316B4*/ PPC::Runtime::ASM::addi(context->r29, context->r30, 0x188);
/*803348B8 003316B8*/ PPC::Runtime::ASM::lwz(context->r6, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x174, context->r31));
/*803348BC 003316BC*/ PPC::Runtime::ASM::stfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x170, context->r30));
/*803348C0 003316C0*/ PPC::Runtime::ASM::addi(context->r4, context->r3, lbl_804BF4DC @ Get_MemoryOffset_LowBit);
/*803348C4 003316C4*/ PPC::Runtime::ASM::lbz(context->r5, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x178, context->r31));
/*803348C8 003316C8*/ PPC::Runtime::ASM::li(context->r0, 0x0);
/*803348CC 003316CC*/ PPC::Runtime::ASM::stfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x16c, context->r30));
/*803348D0 003316D0*/ PPC::Runtime::ASM::mr(context->r3, context->r29);
/*803348D4 003316D4*/ PPC::Runtime::ASM::lfs(context->f2, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x17c, context->r31));
/*803348D8 003316D8*/ PPC::Runtime::ASM::stfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x168, context->r30));
/*803348DC 003316DC*/ PPC::Runtime::ASM::lfs(context->f1, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x180, context->r31));
/*803348E0 003316E0*/ PPC::Runtime::ASM::stw(context->r6, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x174, context->r30));
/*803348E4 003316E4*/ PPC::Runtime::ASM::lfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x184, context->r31));
/*803348E8 003316E8*/ PPC::Runtime::ASM::stb(context->r5, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x178, context->r30));
/*803348EC 003316EC*/ PPC::Runtime::ASM::stfs(context->f2, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x17c, context->r30));
/*803348F0 003316F0*/ PPC::Runtime::ASM::stfs(context->f1, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x180, context->r30));
/*803348F4 003316F4*/ PPC::Runtime::ASM::stfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x184, context->r30));
/*803348F8 003316F8*/ PPC::Runtime::ASM::stw(context->r4, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x188, context->r30));
/*803348FC 003316FC*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x18c, context->r30));
/*80334900 00331700*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x190, context->r30));
/*80334904 00331704*/ PPC::Runtime::ASM::lwz(context->r12, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r29));
/*80334908 00331708*/ PPC::Runtime::ASM::lwz(context->r12, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x10, context->r12));
/*8033490C 0033170C*/ PPC::Runtime::ASM::mtctr(context->r12);
/*80334910 00331710*/ PPC::Runtime::ASM::bctrl();
/*80334914 00331714*/ PPC::Runtime::ASM::lis(context->r3, FuncPtrList_2 @ Get_MemoryOffset_HighBit);
/*80334918 00331718*/ PPC::Runtime::ASM::lis(context->r6, lbl_804F51DC @ Get_MemoryOffset_HighBit);
/*8033491C 0033171C*/ PPC::Runtime::ASM::addi(context->r0, context->r3, FuncPtrList_2 @ Get_MemoryOffset_LowBit);
/*80334920 00331720*/ PPC::Runtime::ASM::lis(context->r5, lbl_804BDB74 @ Get_MemoryOffset_HighBit);
/*80334924 00331724*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r29));
/*80334928 00331728*/ PPC::Runtime::ASM::li(context->r10, 0x0);
/*8033492C 0033172C*/ PPC::Runtime::ASM::lis(context->r4, lbl_804D743C @ Get_MemoryOffset_HighBit);
/*80334930 00331730*/ PPC::Runtime::ASM::lis(context->r3, lbl_804D73DC @ Get_MemoryOffset_HighBit);
/*80334934 00331734*/ PPC::Runtime::ASM::stb(context->r10, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r29));
/*80334938 00331738*/ PPC::Runtime::ASM::addi(context->r7, context->r4, lbl_804D743C @ Get_MemoryOffset_LowBit);
/*8033493C 0033173C*/ PPC::Runtime::ASM::addi(context->r4, context->r3, lbl_804D73DC @ Get_MemoryOffset_LowBit);
/*80334940 00331740*/ PPC::Runtime::ASM::addi(context->r9, context->r6, lbl_804F51DC @ Get_MemoryOffset_LowBit);
/*80334944 00331744*/ PPC::Runtime::ASM::stw(context->r10, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x20, context->r29));
/*80334948 00331748*/ PPC::Runtime::ASM::addi(context->r8, context->r5, lbl_804BDB74 @ Get_MemoryOffset_LowBit);
/*8033494C 0033174C*/ PPC::Runtime::ASM::lfs(context->f1, STRUCT_FLOAT_COUNT_1805E4120 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*80334950 00331750*/ PPC::Runtime::ASM::addi(context->r6, context->r7, 0x38);
/*80334954 00331754*/ PPC::Runtime::ASM::stw(context->r10, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x10, context->r29));
/*80334958 00331758*/ PPC::Runtime::ASM::li(context->r5, 0xff);
/*8033495C 0033175C*/ PPC::Runtime::ASM::lfs(context->f0, STRUCT_FLOAT_COUNT_1805E4124 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*80334960 00331760*/ PPC::Runtime::ASM::addi(context->r0, context->r4, 0x38);
/*80334964 00331764*/ PPC::Runtime::ASM::stw(context->r10, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r29));
/*80334968 00331768*/ PPC::Runtime::ASM::mr(context->r3, context->r30);
/*8033496C 0033176C*/ PPC::Runtime::ASM::stw(context->r10, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x18, context->r29));
/*80334970 00331770*/ PPC::Runtime::ASM::stw(context->r10, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x1c, context->r29));
/*80334974 00331774*/ PPC::Runtime::ASM::stw(context->r9, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x24, context->r29));
/*80334978 00331778*/ PPC::Runtime::ASM::stw(context->r8, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x24, context->r29));
/*8033497C 0033177C*/ PPC::Runtime::ASM::stfs(context->f1, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x28, context->r29));
/*80334980 00331780*/ PPC::Runtime::ASM::stfs(context->f1, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x2c, context->r29));
/*80334984 00331784*/ PPC::Runtime::ASM::stfs(context->f1, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x30, context->r29));
/*80334988 00331788*/ PPC::Runtime::ASM::stfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x34, context->r29));
/*8033498C 0033178C*/ PPC::Runtime::ASM::stw(context->r7, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r29));
/*80334990 00331790*/ PPC::Runtime::ASM::stw(context->r6, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x24, context->r29));
/*80334994 00331794*/ PPC::Runtime::ASM::sth(context->r5, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x3c, context->r29));
/*80334998 00331798*/ PPC::Runtime::ASM::stw(context->r4, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r29));
/*8033499C 0033179C*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x24, context->r29));
/*803349A0 003317A0*/ PPC::Runtime::ASM::lwz(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x1c, context->r1));
/*803349A4 003317A4*/ PPC::Runtime::ASM::lwz(context->r30, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x18, context->r1));
/*803349A8 003317A8*/ PPC::Runtime::ASM::lwz(context->r29, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*803349AC 003317AC*/ PPC::Runtime::ASM::lwz(context->r28, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x10, context->r1));
/*803349B0 003317B0*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x24, context->r1));
/*803349B4 003317B4*/ PPC::Runtime::ASM::mtlr(context->r0);
/*803349B8 003317B8*/ PPC::Runtime::ASM::addi(context->r1, context->r1, 0x20);
/*803349BC 003317BC*/ PPC::Runtime::ASM::blr();
}