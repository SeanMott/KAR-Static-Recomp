//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following
#include "fn___CARDGetControlBlock.hpp"
#include "memset.hpp"
#include "__OSLockSram.hpp"
#include "__OSUnlockSram.hpp"
#include "OSGetTime.hpp"
#include "__OSLockSramEx.hpp"
#include "fn___shr2i.hpp"
#include "fn___shr2i.hpp"
#include "fn___shr2i.hpp"
#include "fn___shr2i.hpp"
#include "fn___shr2i.hpp"
#include "fn___shr2i.hpp"
#include "fn___shr2i.hpp"
#include "fn___shr2i.hpp"
#include "fn___shr2i.hpp"
#include "fn___shr2i.hpp"
#include "fn___shr2i.hpp"
#include "fn___shr2i.hpp"
#include "fn___shr2i.hpp"
#include "fn___shr2i.hpp"
#include "fn___shr2i.hpp"
#include "fn___shr2i.hpp"
#include "fn___shr2i.hpp"
#include "fn___shr2i.hpp"
#include "__OSUnlockSramEx.hpp"
#include "fn___CARDCheckSum.hpp"
#include "memset.hpp"
#include "fn___CARDCheckSum.hpp"
#include "memset.hpp"
#include "fn___CARDCheckSum.hpp"
#include "fn___CARDDefaultApiCallback.hpp"
#include "fn___CARDDefaultApiCallback.hpp"
#include "fn_DCStoreRange.hpp"
#include "fn_FormatCallback.hpp"
#include "fn_FormatCallback.hpp"
#include "fn___CARDEraseSector.hpp"
#include "fn___CARDPutControlBlock.hpp"



void fn___CARDFormatRegionAsync(PPC::Runtime::GCContext* context)
{
/*803E67C0 003E35C0*/ PPC::Runtime::ASM::mflr(context->r0);
/*803E67C4 003E35C4*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x4, context->r1));
/*803E67C8 003E35C8*/ PPC::Runtime::ASM::stwu(context->r1, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x58, context->r1));
/*803E67CC 003E35CC*/ PPC::Runtime::ASM::stmw(context->r18, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x20, context->r1));
/*803E67D0 003E35D0*/ PPC::Runtime::ASM::addi(context->r20, context->r4, 0x0);
/*803E67D4 003E35D4*/ PPC::Runtime::ASM::addi(context->r22, context->r3, 0x0);
/*803E67D8 003E35D8*/ PPC::Runtime::ASM::addi(context->r19, context->r5, 0x0);
/*803E67DC 003E35DC*/ PPC::Runtime::ASM::addi(context->r4, context->r1, 0x18);
/*803E67E0 003E35E0*/ PPC::Runtime::ASM::bl(fn___CARDGetControlBlock);
/*803E67E4 003E35E4*/ PPC::Runtime::ASM::cmpwi(context->r3, 0x0);
/*803E67E8 003E35E8*/ PPC::Runtime::ASM::bge(.L_803E67F0);
/*803E67EC 003E35EC*/ PPC::Runtime::ASM::b(.L_803E6E04);
RUNTIME_PPC_JUMP_LABEL(.L_803E67F0, 0x803E67F0) //this is a jump label
/*803E67F0 003E35F0*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x18, context->r1));
/*803E67F4 003E35F4*/ PPC::Runtime::ASM::li(context->r4, 0xff);
/*803E67F8 003E35F8*/ PPC::Runtime::ASM::li(context->r5, 0x2000);
/*803E67FC 003E35FC*/ PPC::Runtime::ASM::lwz(context->r27, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x80, context->r3));
/*803E6800 003E3600*/ PPC::Runtime::ASM::mr(context->r3, context->r27);
/*803E6804 003E3604*/ PPC::Runtime::ASM::bl(memset);
/*803E6808 003E3608*/ PPC::Runtime::ASM::lis(context->r3, 0xcc00);
/*803E680C 003E360C*/ PPC::Runtime::ASM::lhz(context->r18, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x206e, context->r3));
/*803E6810 003E3610*/ PPC::Runtime::ASM::sth(context->r20, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x24, context->r27));
/*803E6814 003E3614*/ PPC::Runtime::ASM::bl(__OSLockSram);
/*803E6818 003E3618*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r3));
/*803E681C 003E361C*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r27));
/*803E6820 003E3620*/ PPC::Runtime::ASM::lbz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x12, context->r3));
/*803E6824 003E3624*/ PPC::Runtime::ASM::li(context->r3, 0x0);
/*803E6828 003E3628*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x18, context->r27));
/*803E682C 003E362C*/ PPC::Runtime::ASM::bl(__OSUnlockSram);
/*803E6830 003E3630*/ PPC::Runtime::ASM::bl(OSGetTime);
/*803E6834 003E3634*/ PPC::Runtime::ASM::addi(context->r21, context->r4, 0x0);
/*803E6838 003E3638*/ PPC::Runtime::ASM::addi(context->r20, context->r3, 0x0);
/*803E683C 003E363C*/ PPC::Runtime::ASM::addi(context->r26, context->r21, 0x0);
/*803E6840 003E3640*/ PPC::Runtime::ASM::addi(context->r30, context->r20, 0x0);
/*803E6844 003E3644*/ PPC::Runtime::ASM::bl(__OSLockSramEx);
/*803E6848 003E3648*/ PPC::Runtime::ASM::mulli(context->r0, context->r22, 0xc);
/*803E684C 003E364C*/ PPC::Runtime::ASM::add(context->r25, context->r3, context->r0);
/*803E6850 003E3650*/ PPC::Runtime::ASM::lis(context->r3, 0x41c6);
/*803E6854 003E3654*/ PPC::Runtime::ASM::addi(context->r24, context->r25, 0x0);
/*803E6858 003E3658*/ PPC::Runtime::ASM::addi(context->r31, context->r3, 0x4e6d);
/*803E685C 003E365C*/ PPC::Runtime::ASM::li(context->r28, 0x0);
/*803E6860 003E3660*/ PPC::Runtime::ASM::li(context->r23, 0x4);
/*803E6864 003E3664*/ PPC::Runtime::ASM::b(.L_803E6BD8);
RUNTIME_PPC_JUMP_LABEL(.L_803E6868, 0x803E6868) //this is a jump label
/*803E6868 003E3668*/ PPC::Runtime::ASM::mullw(context->r5, context->r30, context->r31);
/*803E686C 003E366C*/ PPC::Runtime::ASM::mulhwu(context->r3, context->r26, context->r31);
/*803E6870 003E3670*/ PPC::Runtime::ASM::li(context->r30, 0x0);
/*803E6874 003E3674*/ PPC::Runtime::ASM::add(context->r5, context->r5, context->r3);
/*803E6878 003E3678*/ PPC::Runtime::ASM::mullw(context->r3, context->r26, context->r30);
/*803E687C 003E367C*/ PPC::Runtime::ASM::mullw(context->r0, context->r26, context->r31);
/*803E6880 003E3680*/ PPC::Runtime::ASM::li(context->r29, 0x3039);
/*803E6884 003E3684*/ PPC::Runtime::ASM::addc(context->r4, context->r0, context->r29);
/*803E6888 003E3688*/ PPC::Runtime::ASM::add(context->r0, context->r5, context->r3);
/*803E688C 003E368C*/ PPC::Runtime::ASM::adde(context->r3, context->r0, context->r30);
/*803E6890 003E3690*/ PPC::Runtime::ASM::li(context->r5, 0x10);
/*803E6894 003E3694*/ PPC::Runtime::ASM::bl(fn___shr2i);
/*803E6898 003E3698*/ PPC::Runtime::ASM::mullw(context->r6, context->r3, context->r31);
/*803E689C 003E369C*/ PPC::Runtime::ASM::lbz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r24));
/*803E68A0 003E36A0*/ PPC::Runtime::ASM::mulhwu(context->r5, context->r4, context->r31);
/*803E68A4 003E36A4*/ PPC::Runtime::ASM::add(context->r6, context->r6, context->r5);
/*803E68A8 003E36A8*/ PPC::Runtime::ASM::addc(context->r8, context->r4, context->r0);
/*803E68AC 003E36AC*/ PPC::Runtime::ASM::extsh(context->r7, context->r28);
/*803E68B0 003E36B0*/ PPC::Runtime::ASM::mullw(context->r5, context->r4, context->r30);
/*803E68B4 003E36B4*/ PPC::Runtime::ASM::stbx(context->r8, context->r27, context->r7);
/*803E68B8 003E36B8*/ PPC::Runtime::ASM::mullw(context->r0, context->r4, context->r31);
/*803E68BC 003E36BC*/ PPC::Runtime::ASM::addc(context->r4, context->r0, context->r29);
/*803E68C0 003E36C0*/ PPC::Runtime::ASM::add(context->r0, context->r6, context->r5);
/*803E68C4 003E36C4*/ PPC::Runtime::ASM::adde(context->r3, context->r0, context->r30);
/*803E68C8 003E36C8*/ PPC::Runtime::ASM::li(context->r5, 0x10);
/*803E68CC 003E36CC*/ PPC::Runtime::ASM::bl(fn___shr2i);
/*803E68D0 003E36D0*/ PPC::Runtime::ASM::li(context->r26, 0x7fff);
/*803E68D4 003E36D4*/ PPC::Runtime::ASM::and(context->r0, context->r3, context->r30);
/*803E68D8 003E36D8*/ PPC::Runtime::ASM::and(context->r4, context->r4, context->r26);
/*803E68DC 003E36DC*/ PPC::Runtime::ASM::mullw(context->r5, context->r0, context->r31);
/*803E68E0 003E36E0*/ PPC::Runtime::ASM::mulhwu(context->r3, context->r4, context->r31);
/*803E68E4 003E36E4*/ PPC::Runtime::ASM::add(context->r5, context->r5, context->r3);
/*803E68E8 003E36E8*/ PPC::Runtime::ASM::mullw(context->r3, context->r4, context->r30);
/*803E68EC 003E36EC*/ PPC::Runtime::ASM::mullw(context->r0, context->r4, context->r31);
/*803E68F0 003E36F0*/ PPC::Runtime::ASM::addc(context->r4, context->r0, context->r29);
/*803E68F4 003E36F4*/ PPC::Runtime::ASM::add(context->r0, context->r5, context->r3);
/*803E68F8 003E36F8*/ PPC::Runtime::ASM::adde(context->r3, context->r0, context->r30);
/*803E68FC 003E36FC*/ PPC::Runtime::ASM::li(context->r5, 0x10);
/*803E6900 003E3700*/ PPC::Runtime::ASM::bl(fn___shr2i);
/*803E6904 003E3704*/ PPC::Runtime::ASM::mullw(context->r6, context->r3, context->r31);
/*803E6908 003E3708*/ PPC::Runtime::ASM::mulhwu(context->r5, context->r4, context->r31);
/*803E690C 003E370C*/ PPC::Runtime::ASM::addi(context->r9, context->r28, 0x1);
/*803E6910 003E3710*/ PPC::Runtime::ASM::extsh(context->r9, context->r9);
/*803E6914 003E3714*/ PPC::Runtime::ASM::lbzx(context->r0, context->r25, context->r9);
/*803E6918 003E3718*/ PPC::Runtime::ASM::add(context->r6, context->r6, context->r5);
/*803E691C 003E371C*/ PPC::Runtime::ASM::mullw(context->r5, context->r4, context->r30);
/*803E6920 003E3720*/ PPC::Runtime::ASM::addc(context->r7, context->r4, context->r0);
/*803E6924 003E3724*/ PPC::Runtime::ASM::mullw(context->r0, context->r4, context->r31);
/*803E6928 003E3728*/ PPC::Runtime::ASM::stbx(context->r7, context->r27, context->r9);
/*803E692C 003E372C*/ PPC::Runtime::ASM::addc(context->r4, context->r0, context->r29);
/*803E6930 003E3730*/ PPC::Runtime::ASM::add(context->r0, context->r6, context->r5);
/*803E6934 003E3734*/ PPC::Runtime::ASM::adde(context->r3, context->r0, context->r30);
/*803E6938 003E3738*/ PPC::Runtime::ASM::li(context->r5, 0x10);
/*803E693C 003E373C*/ PPC::Runtime::ASM::bl(fn___shr2i);
/*803E6940 003E3740*/ PPC::Runtime::ASM::and(context->r0, context->r3, context->r30);
/*803E6944 003E3744*/ PPC::Runtime::ASM::and(context->r4, context->r4, context->r26);
/*803E6948 003E3748*/ PPC::Runtime::ASM::mullw(context->r5, context->r0, context->r31);
/*803E694C 003E374C*/ PPC::Runtime::ASM::mulhwu(context->r3, context->r4, context->r31);
/*803E6950 003E3750*/ PPC::Runtime::ASM::add(context->r5, context->r5, context->r3);
/*803E6954 003E3754*/ PPC::Runtime::ASM::mullw(context->r3, context->r4, context->r30);
/*803E6958 003E3758*/ PPC::Runtime::ASM::mullw(context->r0, context->r4, context->r31);
/*803E695C 003E375C*/ PPC::Runtime::ASM::addc(context->r4, context->r0, context->r29);
/*803E6960 003E3760*/ PPC::Runtime::ASM::add(context->r0, context->r5, context->r3);
/*803E6964 003E3764*/ PPC::Runtime::ASM::adde(context->r3, context->r0, context->r30);
/*803E6968 003E3768*/ PPC::Runtime::ASM::li(context->r5, 0x10);
/*803E696C 003E376C*/ PPC::Runtime::ASM::bl(fn___shr2i);
/*803E6970 003E3770*/ PPC::Runtime::ASM::mullw(context->r6, context->r3, context->r31);
/*803E6974 003E3774*/ PPC::Runtime::ASM::mulhwu(context->r5, context->r4, context->r31);
/*803E6978 003E3778*/ PPC::Runtime::ASM::addi(context->r9, context->r28, 0x2);
/*803E697C 003E377C*/ PPC::Runtime::ASM::extsh(context->r9, context->r9);
/*803E6980 003E3780*/ PPC::Runtime::ASM::lbzx(context->r0, context->r25, context->r9);
/*803E6984 003E3784*/ PPC::Runtime::ASM::add(context->r6, context->r6, context->r5);
/*803E6988 003E3788*/ PPC::Runtime::ASM::mullw(context->r5, context->r4, context->r30);
/*803E698C 003E378C*/ PPC::Runtime::ASM::addc(context->r7, context->r4, context->r0);
/*803E6990 003E3790*/ PPC::Runtime::ASM::mullw(context->r0, context->r4, context->r31);
/*803E6994 003E3794*/ PPC::Runtime::ASM::stbx(context->r7, context->r27, context->r9);
/*803E6998 003E3798*/ PPC::Runtime::ASM::addc(context->r4, context->r0, context->r29);
/*803E699C 003E379C*/ PPC::Runtime::ASM::add(context->r0, context->r6, context->r5);
/*803E69A0 003E37A0*/ PPC::Runtime::ASM::adde(context->r3, context->r0, context->r30);
/*803E69A4 003E37A4*/ PPC::Runtime::ASM::li(context->r5, 0x10);
/*803E69A8 003E37A8*/ PPC::Runtime::ASM::bl(fn___shr2i);
/*803E69AC 003E37AC*/ PPC::Runtime::ASM::and(context->r0, context->r3, context->r30);
/*803E69B0 003E37B0*/ PPC::Runtime::ASM::and(context->r4, context->r4, context->r26);
/*803E69B4 003E37B4*/ PPC::Runtime::ASM::mullw(context->r5, context->r0, context->r31);
/*803E69B8 003E37B8*/ PPC::Runtime::ASM::mulhwu(context->r3, context->r4, context->r31);
/*803E69BC 003E37BC*/ PPC::Runtime::ASM::add(context->r5, context->r5, context->r3);
/*803E69C0 003E37C0*/ PPC::Runtime::ASM::mullw(context->r3, context->r4, context->r30);
/*803E69C4 003E37C4*/ PPC::Runtime::ASM::mullw(context->r0, context->r4, context->r31);
/*803E69C8 003E37C8*/ PPC::Runtime::ASM::addc(context->r4, context->r0, context->r29);
/*803E69CC 003E37CC*/ PPC::Runtime::ASM::add(context->r0, context->r5, context->r3);
/*803E69D0 003E37D0*/ PPC::Runtime::ASM::adde(context->r3, context->r0, context->r30);
/*803E69D4 003E37D4*/ PPC::Runtime::ASM::li(context->r5, 0x10);
/*803E69D8 003E37D8*/ PPC::Runtime::ASM::bl(fn___shr2i);
/*803E69DC 003E37DC*/ PPC::Runtime::ASM::mullw(context->r6, context->r3, context->r31);
/*803E69E0 003E37E0*/ PPC::Runtime::ASM::mulhwu(context->r5, context->r4, context->r31);
/*803E69E4 003E37E4*/ PPC::Runtime::ASM::addi(context->r9, context->r28, 0x3);
/*803E69E8 003E37E8*/ PPC::Runtime::ASM::extsh(context->r9, context->r9);
/*803E69EC 003E37EC*/ PPC::Runtime::ASM::lbzx(context->r0, context->r25, context->r9);
/*803E69F0 003E37F0*/ PPC::Runtime::ASM::add(context->r6, context->r6, context->r5);
/*803E69F4 003E37F4*/ PPC::Runtime::ASM::mullw(context->r5, context->r4, context->r30);
/*803E69F8 003E37F8*/ PPC::Runtime::ASM::addc(context->r7, context->r4, context->r0);
/*803E69FC 003E37FC*/ PPC::Runtime::ASM::mullw(context->r0, context->r4, context->r31);
/*803E6A00 003E3800*/ PPC::Runtime::ASM::stbx(context->r7, context->r27, context->r9);
/*803E6A04 003E3804*/ PPC::Runtime::ASM::addc(context->r4, context->r0, context->r29);
/*803E6A08 003E3808*/ PPC::Runtime::ASM::add(context->r0, context->r6, context->r5);
/*803E6A0C 003E380C*/ PPC::Runtime::ASM::adde(context->r3, context->r0, context->r30);
/*803E6A10 003E3810*/ PPC::Runtime::ASM::li(context->r5, 0x10);
/*803E6A14 003E3814*/ PPC::Runtime::ASM::bl(fn___shr2i);
/*803E6A18 003E3818*/ PPC::Runtime::ASM::and(context->r0, context->r3, context->r30);
/*803E6A1C 003E381C*/ PPC::Runtime::ASM::and(context->r4, context->r4, context->r26);
/*803E6A20 003E3820*/ PPC::Runtime::ASM::mullw(context->r5, context->r0, context->r31);
/*803E6A24 003E3824*/ PPC::Runtime::ASM::mulhwu(context->r3, context->r4, context->r31);
/*803E6A28 003E3828*/ PPC::Runtime::ASM::add(context->r5, context->r5, context->r3);
/*803E6A2C 003E382C*/ PPC::Runtime::ASM::mullw(context->r3, context->r4, context->r30);
/*803E6A30 003E3830*/ PPC::Runtime::ASM::mullw(context->r0, context->r4, context->r31);
/*803E6A34 003E3834*/ PPC::Runtime::ASM::addc(context->r4, context->r0, context->r29);
/*803E6A38 003E3838*/ PPC::Runtime::ASM::add(context->r0, context->r5, context->r3);
/*803E6A3C 003E383C*/ PPC::Runtime::ASM::adde(context->r3, context->r0, context->r30);
/*803E6A40 003E3840*/ PPC::Runtime::ASM::li(context->r5, 0x10);
/*803E6A44 003E3844*/ PPC::Runtime::ASM::bl(fn___shr2i);
/*803E6A48 003E3848*/ PPC::Runtime::ASM::mullw(context->r6, context->r3, context->r31);
/*803E6A4C 003E384C*/ PPC::Runtime::ASM::mulhwu(context->r5, context->r4, context->r31);
/*803E6A50 003E3850*/ PPC::Runtime::ASM::addi(context->r9, context->r28, 0x4);
/*803E6A54 003E3854*/ PPC::Runtime::ASM::extsh(context->r9, context->r9);
/*803E6A58 003E3858*/ PPC::Runtime::ASM::lbzx(context->r0, context->r25, context->r9);
/*803E6A5C 003E385C*/ PPC::Runtime::ASM::add(context->r6, context->r6, context->r5);
/*803E6A60 003E3860*/ PPC::Runtime::ASM::mullw(context->r5, context->r4, context->r30);
/*803E6A64 003E3864*/ PPC::Runtime::ASM::addc(context->r7, context->r4, context->r0);
/*803E6A68 003E3868*/ PPC::Runtime::ASM::mullw(context->r0, context->r4, context->r31);
/*803E6A6C 003E386C*/ PPC::Runtime::ASM::stbx(context->r7, context->r27, context->r9);
/*803E6A70 003E3870*/ PPC::Runtime::ASM::addc(context->r4, context->r0, context->r29);
/*803E6A74 003E3874*/ PPC::Runtime::ASM::add(context->r0, context->r6, context->r5);
/*803E6A78 003E3878*/ PPC::Runtime::ASM::adde(context->r3, context->r0, context->r30);
/*803E6A7C 003E387C*/ PPC::Runtime::ASM::li(context->r5, 0x10);
/*803E6A80 003E3880*/ PPC::Runtime::ASM::bl(fn___shr2i);
/*803E6A84 003E3884*/ PPC::Runtime::ASM::and(context->r0, context->r3, context->r30);
/*803E6A88 003E3888*/ PPC::Runtime::ASM::and(context->r4, context->r4, context->r26);
/*803E6A8C 003E388C*/ PPC::Runtime::ASM::mullw(context->r5, context->r0, context->r31);
/*803E6A90 003E3890*/ PPC::Runtime::ASM::mulhwu(context->r3, context->r4, context->r31);
/*803E6A94 003E3894*/ PPC::Runtime::ASM::add(context->r5, context->r5, context->r3);
/*803E6A98 003E3898*/ PPC::Runtime::ASM::mullw(context->r3, context->r4, context->r30);
/*803E6A9C 003E389C*/ PPC::Runtime::ASM::mullw(context->r0, context->r4, context->r31);
/*803E6AA0 003E38A0*/ PPC::Runtime::ASM::addc(context->r4, context->r0, context->r29);
/*803E6AA4 003E38A4*/ PPC::Runtime::ASM::add(context->r0, context->r5, context->r3);
/*803E6AA8 003E38A8*/ PPC::Runtime::ASM::adde(context->r3, context->r0, context->r30);
/*803E6AAC 003E38AC*/ PPC::Runtime::ASM::li(context->r5, 0x10);
/*803E6AB0 003E38B0*/ PPC::Runtime::ASM::bl(fn___shr2i);
/*803E6AB4 003E38B4*/ PPC::Runtime::ASM::mullw(context->r6, context->r3, context->r31);
/*803E6AB8 003E38B8*/ PPC::Runtime::ASM::mulhwu(context->r5, context->r4, context->r31);
/*803E6ABC 003E38BC*/ PPC::Runtime::ASM::addi(context->r9, context->r28, 0x5);
/*803E6AC0 003E38C0*/ PPC::Runtime::ASM::extsh(context->r9, context->r9);
/*803E6AC4 003E38C4*/ PPC::Runtime::ASM::lbzx(context->r0, context->r25, context->r9);
/*803E6AC8 003E38C8*/ PPC::Runtime::ASM::add(context->r6, context->r6, context->r5);
/*803E6ACC 003E38CC*/ PPC::Runtime::ASM::mullw(context->r5, context->r4, context->r30);
/*803E6AD0 003E38D0*/ PPC::Runtime::ASM::addc(context->r7, context->r4, context->r0);
/*803E6AD4 003E38D4*/ PPC::Runtime::ASM::mullw(context->r0, context->r4, context->r31);
/*803E6AD8 003E38D8*/ PPC::Runtime::ASM::stbx(context->r7, context->r27, context->r9);
/*803E6ADC 003E38DC*/ PPC::Runtime::ASM::addc(context->r4, context->r0, context->r29);
/*803E6AE0 003E38E0*/ PPC::Runtime::ASM::add(context->r0, context->r6, context->r5);
/*803E6AE4 003E38E4*/ PPC::Runtime::ASM::adde(context->r3, context->r0, context->r30);
/*803E6AE8 003E38E8*/ PPC::Runtime::ASM::li(context->r5, 0x10);
/*803E6AEC 003E38EC*/ PPC::Runtime::ASM::bl(fn___shr2i);
/*803E6AF0 003E38F0*/ PPC::Runtime::ASM::and(context->r0, context->r3, context->r30);
/*803E6AF4 003E38F4*/ PPC::Runtime::ASM::and(context->r4, context->r4, context->r26);
/*803E6AF8 003E38F8*/ PPC::Runtime::ASM::mullw(context->r5, context->r0, context->r31);
/*803E6AFC 003E38FC*/ PPC::Runtime::ASM::mulhwu(context->r3, context->r4, context->r31);
/*803E6B00 003E3900*/ PPC::Runtime::ASM::add(context->r5, context->r5, context->r3);
/*803E6B04 003E3904*/ PPC::Runtime::ASM::mullw(context->r3, context->r4, context->r30);
/*803E6B08 003E3908*/ PPC::Runtime::ASM::mullw(context->r0, context->r4, context->r31);
/*803E6B0C 003E390C*/ PPC::Runtime::ASM::addc(context->r4, context->r0, context->r29);
/*803E6B10 003E3910*/ PPC::Runtime::ASM::add(context->r0, context->r5, context->r3);
/*803E6B14 003E3914*/ PPC::Runtime::ASM::adde(context->r3, context->r0, context->r30);
/*803E6B18 003E3918*/ PPC::Runtime::ASM::li(context->r5, 0x10);
/*803E6B1C 003E391C*/ PPC::Runtime::ASM::bl(fn___shr2i);
/*803E6B20 003E3920*/ PPC::Runtime::ASM::mullw(context->r6, context->r3, context->r31);
/*803E6B24 003E3924*/ PPC::Runtime::ASM::mulhwu(context->r5, context->r4, context->r31);
/*803E6B28 003E3928*/ PPC::Runtime::ASM::addi(context->r9, context->r28, 0x6);
/*803E6B2C 003E392C*/ PPC::Runtime::ASM::extsh(context->r9, context->r9);
/*803E6B30 003E3930*/ PPC::Runtime::ASM::lbzx(context->r0, context->r25, context->r9);
/*803E6B34 003E3934*/ PPC::Runtime::ASM::add(context->r6, context->r6, context->r5);
/*803E6B38 003E3938*/ PPC::Runtime::ASM::mullw(context->r5, context->r4, context->r30);
/*803E6B3C 003E393C*/ PPC::Runtime::ASM::addc(context->r7, context->r4, context->r0);
/*803E6B40 003E3940*/ PPC::Runtime::ASM::mullw(context->r0, context->r4, context->r31);
/*803E6B44 003E3944*/ PPC::Runtime::ASM::stbx(context->r7, context->r27, context->r9);
/*803E6B48 003E3948*/ PPC::Runtime::ASM::addc(context->r4, context->r0, context->r29);
/*803E6B4C 003E394C*/ PPC::Runtime::ASM::add(context->r0, context->r6, context->r5);
/*803E6B50 003E3950*/ PPC::Runtime::ASM::adde(context->r3, context->r0, context->r30);
/*803E6B54 003E3954*/ PPC::Runtime::ASM::li(context->r5, 0x10);
/*803E6B58 003E3958*/ PPC::Runtime::ASM::bl(fn___shr2i);
/*803E6B5C 003E395C*/ PPC::Runtime::ASM::and(context->r0, context->r3, context->r30);
/*803E6B60 003E3960*/ PPC::Runtime::ASM::and(context->r4, context->r4, context->r26);
/*803E6B64 003E3964*/ PPC::Runtime::ASM::mullw(context->r5, context->r0, context->r31);
/*803E6B68 003E3968*/ PPC::Runtime::ASM::mulhwu(context->r3, context->r4, context->r31);
/*803E6B6C 003E396C*/ PPC::Runtime::ASM::add(context->r5, context->r5, context->r3);
/*803E6B70 003E3970*/ PPC::Runtime::ASM::mullw(context->r3, context->r4, context->r30);
/*803E6B74 003E3974*/ PPC::Runtime::ASM::mullw(context->r0, context->r4, context->r31);
/*803E6B78 003E3978*/ PPC::Runtime::ASM::addc(context->r4, context->r0, context->r29);
/*803E6B7C 003E397C*/ PPC::Runtime::ASM::add(context->r0, context->r5, context->r3);
/*803E6B80 003E3980*/ PPC::Runtime::ASM::adde(context->r3, context->r0, context->r30);
/*803E6B84 003E3984*/ PPC::Runtime::ASM::li(context->r5, 0x10);
/*803E6B88 003E3988*/ PPC::Runtime::ASM::bl(fn___shr2i);
/*803E6B8C 003E398C*/ PPC::Runtime::ASM::mullw(context->r6, context->r3, context->r31);
/*803E6B90 003E3990*/ PPC::Runtime::ASM::mulhwu(context->r5, context->r4, context->r31);
/*803E6B94 003E3994*/ PPC::Runtime::ASM::addi(context->r9, context->r28, 0x7);
/*803E6B98 003E3998*/ PPC::Runtime::ASM::extsh(context->r9, context->r9);
/*803E6B9C 003E399C*/ PPC::Runtime::ASM::lbzx(context->r0, context->r25, context->r9);
/*803E6BA0 003E39A0*/ PPC::Runtime::ASM::add(context->r6, context->r6, context->r5);
/*803E6BA4 003E39A4*/ PPC::Runtime::ASM::mullw(context->r5, context->r4, context->r30);
/*803E6BA8 003E39A8*/ PPC::Runtime::ASM::addc(context->r7, context->r4, context->r0);
/*803E6BAC 003E39AC*/ PPC::Runtime::ASM::mullw(context->r0, context->r4, context->r31);
/*803E6BB0 003E39B0*/ PPC::Runtime::ASM::stbx(context->r7, context->r27, context->r9);
/*803E6BB4 003E39B4*/ PPC::Runtime::ASM::addc(context->r4, context->r0, context->r29);
/*803E6BB8 003E39B8*/ PPC::Runtime::ASM::add(context->r0, context->r6, context->r5);
/*803E6BBC 003E39BC*/ PPC::Runtime::ASM::adde(context->r3, context->r0, context->r30);
/*803E6BC0 003E39C0*/ PPC::Runtime::ASM::li(context->r5, 0x10);
/*803E6BC4 003E39C4*/ PPC::Runtime::ASM::bl(fn___shr2i);
/*803E6BC8 003E39C8*/ PPC::Runtime::ASM::and(context->r26, context->r4, context->r26);
/*803E6BCC 003E39CC*/ PPC::Runtime::ASM::and(context->r30, context->r3, context->r30);
/*803E6BD0 003E39D0*/ PPC::Runtime::ASM::addi(context->r24, context->r24, 0x8);
/*803E6BD4 003E39D4*/ PPC::Runtime::ASM::addi(context->r28, context->r28, 0x8);
RUNTIME_PPC_JUMP_LABEL(.L_803E6BD8, 0x803E6BD8) //this is a jump label
/*803E6BD8 003E39D8*/ PPC::Runtime::ASM::extsh(context->r0, context->r28);
/*803E6BDC 003E39DC*/ PPC::Runtime::ASM::cmpw(context->r0, context->r23);
/*803E6BE0 003E39E0*/ PPC::Runtime::ASM::blt(.L_803E6868);
/*803E6BE4 003E39E4*/ PPC::Runtime::ASM::b(.L_803E6DFC);
RUNTIME_PPC_JUMP_LABEL(.L_803E6BE8, 0x803E6BE8) //this is a jump label
/*803E6BE8 003E39E8*/ PPC::Runtime::ASM::lis(context->r3, 0x41c6);
/*803E6BEC 003E39EC*/ PPC::Runtime::ASM::addi(context->r25, context->r3, 0x4e6d);
/*803E6BF0 003E39F0*/ PPC::Runtime::ASM::b(.L_803E6C70);
RUNTIME_PPC_JUMP_LABEL(.L_803E6BF4, 0x803E6BF4) //this is a jump label
/*803E6BF4 003E39F4*/ PPC::Runtime::ASM::mullw(context->r5, context->r30, context->r25);
/*803E6BF8 003E39F8*/ PPC::Runtime::ASM::mulhwu(context->r3, context->r26, context->r25);
/*803E6BFC 003E39FC*/ PPC::Runtime::ASM::li(context->r24, 0x0);
/*803E6C00 003E3A00*/ PPC::Runtime::ASM::add(context->r5, context->r5, context->r3);
/*803E6C04 003E3A04*/ PPC::Runtime::ASM::mullw(context->r3, context->r26, context->r24);
/*803E6C08 003E3A08*/ PPC::Runtime::ASM::mullw(context->r0, context->r26, context->r25);
/*803E6C0C 003E3A0C*/ PPC::Runtime::ASM::li(context->r23, 0x3039);
/*803E6C10 003E3A10*/ PPC::Runtime::ASM::addc(context->r4, context->r0, context->r23);
/*803E6C14 003E3A14*/ PPC::Runtime::ASM::add(context->r0, context->r5, context->r3);
/*803E6C18 003E3A18*/ PPC::Runtime::ASM::adde(context->r3, context->r0, context->r24);
/*803E6C1C 003E3A1C*/ PPC::Runtime::ASM::li(context->r5, 0x10);
/*803E6C20 003E3A20*/ PPC::Runtime::ASM::bl(fn___shr2i);
/*803E6C24 003E3A24*/ PPC::Runtime::ASM::mullw(context->r6, context->r3, context->r25);
/*803E6C28 003E3A28*/ PPC::Runtime::ASM::lbz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r29));
/*803E6C2C 003E3A2C*/ PPC::Runtime::ASM::mulhwu(context->r5, context->r4, context->r25);
/*803E6C30 003E3A30*/ PPC::Runtime::ASM::add(context->r6, context->r6, context->r5);
/*803E6C34 003E3A34*/ PPC::Runtime::ASM::addc(context->r8, context->r4, context->r0);
/*803E6C38 003E3A38*/ PPC::Runtime::ASM::extsh(context->r7, context->r28);
/*803E6C3C 003E3A3C*/ PPC::Runtime::ASM::mullw(context->r5, context->r4, context->r24);
/*803E6C40 003E3A40*/ PPC::Runtime::ASM::stbx(context->r8, context->r27, context->r7);
/*803E6C44 003E3A44*/ PPC::Runtime::ASM::mullw(context->r0, context->r4, context->r25);
/*803E6C48 003E3A48*/ PPC::Runtime::ASM::addc(context->r4, context->r0, context->r23);
/*803E6C4C 003E3A4C*/ PPC::Runtime::ASM::add(context->r0, context->r6, context->r5);
/*803E6C50 003E3A50*/ PPC::Runtime::ASM::adde(context->r3, context->r0, context->r24);
/*803E6C54 003E3A54*/ PPC::Runtime::ASM::li(context->r5, 0x10);
/*803E6C58 003E3A58*/ PPC::Runtime::ASM::bl(fn___shr2i);
/*803E6C5C 003E3A5C*/ PPC::Runtime::ASM::li(context->r0, 0x7fff);
/*803E6C60 003E3A60*/ PPC::Runtime::ASM::and(context->r26, context->r4, context->r0);
/*803E6C64 003E3A64*/ PPC::Runtime::ASM::and(context->r30, context->r3, context->r24);
/*803E6C68 003E3A68*/ PPC::Runtime::ASM::addi(context->r29, context->r29, 0x1);
/*803E6C6C 003E3A6C*/ PPC::Runtime::ASM::addi(context->r28, context->r28, 0x1);
RUNTIME_PPC_JUMP_LABEL(.L_803E6C70, 0x803E6C70) //this is a jump label
/*803E6C70 003E3A70*/ PPC::Runtime::ASM::extsh(context->r0, context->r28);
/*803E6C74 003E3A74*/ PPC::Runtime::ASM::cmpwi(context->r0, 0xc);
/*803E6C78 003E3A78*/ PPC::Runtime::ASM::blt(.L_803E6BF4);
/*803E6C7C 003E3A7C*/ PPC::Runtime::ASM::li(context->r3, 0x0);
/*803E6C80 003E3A80*/ PPC::Runtime::ASM::bl(__OSUnlockSramEx);
/*803E6C84 003E3A84*/ PPC::Runtime::ASM::stw(context->r18, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x1c, context->r27));
/*803E6C88 003E3A88*/ PPC::Runtime::ASM::li(context->r18, 0x0);
/*803E6C8C 003E3A8C*/ PPC::Runtime::ASM::addi(context->r3, context->r27, 0x0);
/*803E6C90 003E3A90*/ PPC::Runtime::ASM::stw(context->r21, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x10, context->r27));
/*803E6C94 003E3A94*/ PPC::Runtime::ASM::addi(context->r5, context->r27, 0x1fc);
/*803E6C98 003E3A98*/ PPC::Runtime::ASM::addi(context->r6, context->r27, 0x1fe);
/*803E6C9C 003E3A9C*/ PPC::Runtime::ASM::stw(context->r20, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r27));
/*803E6CA0 003E3AA0*/ PPC::Runtime::ASM::li(context->r4, 0x1fc);
/*803E6CA4 003E3AA4*/ PPC::Runtime::ASM::sth(context->r18, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x20, context->r27));
/*803E6CA8 003E3AA8*/ PPC::Runtime::ASM::lwz(context->r7, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x18, context->r1));
/*803E6CAC 003E3AAC*/ PPC::Runtime::ASM::lhz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r7));
/*803E6CB0 003E3AB0*/ PPC::Runtime::ASM::sth(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x22, context->r27));
/*803E6CB4 003E3AB4*/ PPC::Runtime::ASM::bl(fn___CARDCheckSum);
/*803E6CB8 003E3AB8*/ PPC::Runtime::ASM::b(.L_803E6D04);
RUNTIME_PPC_JUMP_LABEL(.L_803E6CBC, 0x803E6CBC) //this is a jump label
/*803E6CBC 003E3ABC*/ PPC::Runtime::ASM::lwz(context->r4, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x18, context->r1));
/*803E6CC0 003E3AC0*/ PPC::Runtime::ASM::extsh(context->r3, context->r18);
/*803E6CC4 003E3AC4*/ PPC::Runtime::ASM::addi(context->r0, context->r3, 0x1);
/*803E6CC8 003E3AC8*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x80, context->r4));
/*803E6CCC 003E3ACC*/ PPC::Runtime::ASM::slwi(context->r0, context->r0, 13);
/*803E6CD0 003E3AD0*/ PPC::Runtime::ASM::li(context->r4, 0xff);
/*803E6CD4 003E3AD4*/ PPC::Runtime::ASM::add(context->r20, context->r3, context->r0);
/*803E6CD8 003E3AD8*/ PPC::Runtime::ASM::addi(context->r3, context->r20, 0x0);
/*803E6CDC 003E3ADC*/ PPC::Runtime::ASM::li(context->r5, 0x2000);
/*803E6CE0 003E3AE0*/ PPC::Runtime::ASM::bl(memset);
/*803E6CE4 003E3AE4*/ PPC::Runtime::ASM::addi(context->r4, context->r20, 0x1fc0);
/*803E6CE8 003E3AE8*/ PPC::Runtime::ASM::sth(context->r18, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x1ffa, context->r20));
/*803E6CEC 003E3AEC*/ PPC::Runtime::ASM::addi(context->r3, context->r20, 0x0);
/*803E6CF0 003E3AF0*/ PPC::Runtime::ASM::addi(context->r5, context->r4, 0x3c);
/*803E6CF4 003E3AF4*/ PPC::Runtime::ASM::addi(context->r6, context->r4, 0x3e);
/*803E6CF8 003E3AF8*/ PPC::Runtime::ASM::li(context->r4, 0x1ffc);
/*803E6CFC 003E3AFC*/ PPC::Runtime::ASM::bl(fn___CARDCheckSum);
/*803E6D00 003E3B00*/ PPC::Runtime::ASM::addi(context->r18, context->r18, 0x1);
RUNTIME_PPC_JUMP_LABEL(.L_803E6D04, 0x803E6D04) //this is a jump label
/*803E6D04 003E3B04*/ PPC::Runtime::ASM::extsh(context->r0, context->r18);
/*803E6D08 003E3B08*/ PPC::Runtime::ASM::cmpwi(context->r0, 0x2);
/*803E6D0C 003E3B0C*/ PPC::Runtime::ASM::blt(.L_803E6CBC);
/*803E6D10 003E3B10*/ PPC::Runtime::ASM::li(context->r18, 0x0);
/*803E6D14 003E3B14*/ PPC::Runtime::ASM::b(.L_803E6D74);
RUNTIME_PPC_JUMP_LABEL(.L_803E6D18, 0x803E6D18) //this is a jump label
/*803E6D18 003E3B18*/ PPC::Runtime::ASM::lwz(context->r4, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x18, context->r1));
/*803E6D1C 003E3B1C*/ PPC::Runtime::ASM::extsh(context->r3, context->r18);
/*803E6D20 003E3B20*/ PPC::Runtime::ASM::addi(context->r0, context->r3, 0x3);
/*803E6D24 003E3B24*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x80, context->r4));
/*803E6D28 003E3B28*/ PPC::Runtime::ASM::slwi(context->r0, context->r0, 13);
/*803E6D2C 003E3B2C*/ PPC::Runtime::ASM::li(context->r4, 0x0);
/*803E6D30 003E3B30*/ PPC::Runtime::ASM::add(context->r20, context->r3, context->r0);
/*803E6D34 003E3B34*/ PPC::Runtime::ASM::addi(context->r3, context->r20, 0x0);
/*803E6D38 003E3B38*/ PPC::Runtime::ASM::li(context->r5, 0x2000);
/*803E6D3C 003E3B3C*/ PPC::Runtime::ASM::bl(memset);
/*803E6D40 003E3B40*/ PPC::Runtime::ASM::sth(context->r18, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x4, context->r20));
/*803E6D44 003E3B44*/ PPC::Runtime::ASM::li(context->r0, 0x4);
/*803E6D48 003E3B48*/ PPC::Runtime::ASM::addi(context->r5, context->r20, 0x0);
/*803E6D4C 003E3B4C*/ PPC::Runtime::ASM::lwz(context->r4, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x18, context->r1));
/*803E6D50 003E3B50*/ PPC::Runtime::ASM::addi(context->r3, context->r20, 0x4);
/*803E6D54 003E3B54*/ PPC::Runtime::ASM::addi(context->r6, context->r20, 0x2);
/*803E6D58 003E3B58*/ PPC::Runtime::ASM::lhz(context->r7, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x10, context->r4));
/*803E6D5C 003E3B5C*/ PPC::Runtime::ASM::li(context->r4, 0x1ffc);
/*803E6D60 003E3B60*/ PPC::Runtime::ASM::subi(context->r7, context->r7, 0x5);
/*803E6D64 003E3B64*/ PPC::Runtime::ASM::sth(context->r7, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x6, context->r20));
/*803E6D68 003E3B68*/ PPC::Runtime::ASM::sth(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r20));
/*803E6D6C 003E3B6C*/ PPC::Runtime::ASM::bl(fn___CARDCheckSum);
/*803E6D70 003E3B70*/ PPC::Runtime::ASM::addi(context->r18, context->r18, 0x1);
RUNTIME_PPC_JUMP_LABEL(.L_803E6D74, 0x803E6D74) //this is a jump label
/*803E6D74 003E3B74*/ PPC::Runtime::ASM::extsh(context->r0, context->r18);
/*803E6D78 003E3B78*/ PPC::Runtime::ASM::cmpwi(context->r0, 0x2);
/*803E6D7C 003E3B7C*/ PPC::Runtime::ASM::blt(.L_803E6D18);
/*803E6D80 003E3B80*/ PPC::Runtime::ASM::cmplwi(context->r19, 0x0);
/*803E6D84 003E3B84*/ PPC::Runtime::ASM::beq(.L_803E6D90);
/*803E6D88 003E3B88*/ PPC::Runtime::ASM::mr(context->r0, context->r19);
/*803E6D8C 003E3B8C*/ PPC::Runtime::ASM::b(.L_803E6D98);
RUNTIME_PPC_JUMP_LABEL(.L_803E6D90, 0x803E6D90) //this is a jump label
/*803E6D90 003E3B90*/ PPC::Runtime::ASM::lis(context->r3, fn___CARDDefaultApiCallback @ Get_MemoryOffset_HighBit);
/*803E6D94 003E3B94*/ PPC::Runtime::ASM::addi(context->r0, context->r3, fn___CARDDefaultApiCallback @ Get_MemoryOffset_LowBit);
RUNTIME_PPC_JUMP_LABEL(.L_803E6D98, 0x803E6D98) //this is a jump label
/*803E6D98 003E3B98*/ PPC::Runtime::ASM::lwz(context->r5, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x18, context->r1));
/*803E6D9C 003E3B9C*/ PPC::Runtime::ASM::lis(context->r3, 0x1);
/*803E6DA0 003E3BA0*/ PPC::Runtime::ASM::subi(context->r4, context->r3, 0x6000);
/*803E6DA4 003E3BA4*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xd0, context->r5));
/*803E6DA8 003E3BA8*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x18, context->r1));
/*803E6DAC 003E3BAC*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x80, context->r3));
/*803E6DB0 003E3BB0*/ PPC::Runtime::ASM::bl(fn_DCStoreRange);
/*803E6DB4 003E3BB4*/ PPC::Runtime::ASM::lwz(context->r4, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x18, context->r1));
/*803E6DB8 003E3BB8*/ PPC::Runtime::ASM::li(context->r0, 0x0);
/*803E6DBC 003E3BBC*/ PPC::Runtime::ASM::lis(context->r3, fn_FormatCallback @ Get_MemoryOffset_HighBit);
/*803E6DC0 003E3BC0*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x28, context->r4));
/*803E6DC4 003E3BC4*/ PPC::Runtime::ASM::addi(context->r5, context->r3, fn_FormatCallback @ Get_MemoryOffset_LowBit);
/*803E6DC8 003E3BC8*/ PPC::Runtime::ASM::addi(context->r3, context->r22, 0x0);
/*803E6DCC 003E3BCC*/ PPC::Runtime::ASM::lwz(context->r6, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x18, context->r1));
/*803E6DD0 003E3BD0*/ PPC::Runtime::ASM::lwz(context->r4, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r6));
/*803E6DD4 003E3BD4*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x28, context->r6));
/*803E6DD8 003E3BD8*/ PPC::Runtime::ASM::mullw(context->r4, context->r4, context->r0);
/*803E6DDC 003E3BDC*/ PPC::Runtime::ASM::bl(fn___CARDEraseSector);
/* 803E6DE0 003E3BE0  7C 72 1B 79 */ mr. context->r18 , context->r3
/*803E6DE4 003E3BE4*/ PPC::Runtime::ASM::bge(.L_803E6DF4);
/*803E6DE8 003E3BE8*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x18, context->r1));
/*803E6DEC 003E3BEC*/ PPC::Runtime::ASM::mr(context->r4, context->r18);
/*803E6DF0 003E3BF0*/ PPC::Runtime::ASM::bl(fn___CARDPutControlBlock);
RUNTIME_PPC_JUMP_LABEL(.L_803E6DF4, 0x803E6DF4) //this is a jump label
/*803E6DF4 003E3BF4*/ PPC::Runtime::ASM::mr(context->r3, context->r18);
/*803E6DF8 003E3BF8*/ PPC::Runtime::ASM::b(.L_803E6E04);
RUNTIME_PPC_JUMP_LABEL(.L_803E6DFC, 0x803E6DFC) //this is a jump label
/*803E6DFC 003E3BFC*/ PPC::Runtime::ASM::add(context->r29, context->r25, context->r0);
/*803E6E00 003E3C00*/ PPC::Runtime::ASM::b(.L_803E6BE8);
RUNTIME_PPC_JUMP_LABEL(.L_803E6E04, 0x803E6E04) //this is a jump label
/*803E6E04 003E3C04*/ PPC::Runtime::ASM::lmw(context->r18, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x20, context->r1));
/*803E6E08 003E3C08*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x5c, context->r1));
/*803E6E0C 003E3C0C*/ PPC::Runtime::ASM::addi(context->r1, context->r1, 0x58);
/*803E6E10 003E3C10*/ PPC::Runtime::ASM::mtlr(context->r0);
/*803E6E14 003E3C14*/ PPC::Runtime::ASM::blr();
}