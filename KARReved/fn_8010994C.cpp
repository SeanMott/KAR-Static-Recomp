//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following
#include "fn_JObj_GetWorldPosition.hpp"
#include "fn_800F57EC.hpp"
#include "fn_killWhispy.hpp"
#include "fn_800F579C.hpp"
#include "fn_800F5C68.hpp"
#include "fn_800F57EC.hpp"
#include "fn_killWhispy.hpp"
#include "fn_800F579C.hpp"
#include "fn_800F5C68.hpp"
#include "fn_JObj_GetWorldPosition.hpp"
#include "fn_800F57EC.hpp"
#include "fn_killWhispy.hpp"
#include "fn_800F579C.hpp"
#include "fn_800F5C68.hpp"



void fn_8010994C(PPC::Runtime::GCContext* context)
{
/*8010994C 0010674C*/ PPC::Runtime::ASM::stwu(context->r1, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x40, context->r1));
/*80109950 00106750*/ PPC::Runtime::ASM::mflr(context->r0);
/*80109954 00106754*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x44, context->r1));
/*80109958 00106758*/ PPC::Runtime::ASM::stfd(context->f31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x30, context->r1));
/*8010995C 0010675C*/ PPC::Runtime::ASM::psq_st(context->f31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x38, context->r1)0, context->qr0);
/*80109960 00106760*/ PPC::Runtime::ASM::stw(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x2c, context->r1));
/*80109964 00106764*/ PPC::Runtime::ASM::stw(context->r30, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x28, context->r1));
/*80109968 00106768*/ PPC::Runtime::ASM::stw(context->r29, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x24, context->r1));
/*8010996C 0010676C*/ PPC::Runtime::ASM::stw(context->r28, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x20, context->r1));
/*80109970 00106770*/ PPC::Runtime::ASM::mr(context->r29, context->r3);
/*80109974 00106774*/ PPC::Runtime::ASM::mr(context->r30, context->r5);
/*80109978 00106778*/ PPC::Runtime::ASM::lwz(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x2c, context->r3));
/*8010997C 0010677C*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x74, context->r31));
/*80109980 00106780*/ PPC::Runtime::ASM::cmpwi(context->r0, 0x1);
/*80109984 00106784*/ PPC::Runtime::ASM::beq(.L_80109B38);
/*80109988 00106788*/ PPC::Runtime::ASM::bge(.L_80109C5C);
/*8010998C 0010678C*/ PPC::Runtime::ASM::cmpwi(context->r0, 0x0);
/*80109990 00106790*/ PPC::Runtime::ASM::bge(.L_80109998);
/*80109994 00106794*/ PPC::Runtime::ASM::b(.L_80109C5C);
RUNTIME_PPC_JUMP_LABEL(.L_80109998, 0x80109998) //this is a jump label
/*80109998 00106798*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r31));
/*8010999C 0010679C*/ PPC::Runtime::ASM::lwz(context->r4, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x64, context->r31));
/*801099A0 001067A0*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r3));
/*801099A4 001067A4*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x4, context->r3));
/*801099A8 001067A8*/ PPC::Runtime::ASM::slwi(context->r0, context->r0, 3);
/*801099AC 001067AC*/ PPC::Runtime::ASM::lwzx(context->r28, context->r4, context->r0);
/*801099B0 001067B0*/ PPC::Runtime::ASM::cmplwi(context->r28, 0x0);
/*801099B4 001067B4*/ PPC::Runtime::ASM::bne(.L_801099C8);
/*801099B8 001067B8*/ PPC::Runtime::ASM::li(context->r3, lbl_805D6308 @ Get_MemoryOffset_SDA21);
/*801099BC 001067BC*/ PPC::Runtime::ASM::li(context->r4, 0x47c);
/*801099C0 001067C0*/ PPC::Runtime::ASM::li(context->r5, lbl_805D6310 @ Get_MemoryOffset_SDA21);
/*801099C4 001067C4*/ PPC::Runtime::ASM::bl(fn___assert);
RUNTIME_PPC_JUMP_LABEL(.L_801099C8, 0x801099C8) //this is a jump label
/*801099C8 001067C8*/ PPC::Runtime::ASM::cmplwi(context->r28, 0x0);
/*801099CC 001067CC*/ PPC::Runtime::ASM::beq(.L_80109A10);
/*801099D0 001067D0*/ PPC::Runtime::ASM::bne(.L_801099E4);
/*801099D4 001067D4*/ PPC::Runtime::ASM::li(context->r3, lbl_805D6308 @ Get_MemoryOffset_SDA21);
/*801099D8 001067D8*/ PPC::Runtime::ASM::li(context->r4, 0x25d);
/*801099DC 001067DC*/ PPC::Runtime::ASM::li(context->r5, lbl_805D6310 @ Get_MemoryOffset_SDA21);
/*801099E0 001067E0*/ PPC::Runtime::ASM::bl(fn___assert);
RUNTIME_PPC_JUMP_LABEL(.L_801099E4, 0x801099E4) //this is a jump label
/*801099E4 001067E4*/ PPC::Runtime::ASM::lwz(context->r4, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r28));
/*801099E8 001067E8*/ PPC::Runtime::ASM::li(context->r3, 0x0);
/*801099EC 001067EC*/ PPC::Runtime::ASM::rlwinm.(context->r0, context->r4, 0, 8, 8);
/*801099F0 001067F0*/ PPC::Runtime::ASM::bne(.L_80109A00);
/*801099F4 001067F4*/ PPC::Runtime::ASM::rlwinm.(context->r0, context->r4, 0, 25, 25);
/*801099F8 001067F8*/ PPC::Runtime::ASM::beq(.L_80109A00);
/*801099FC 001067FC*/ PPC::Runtime::ASM::li(context->r3, 0x1);
RUNTIME_PPC_JUMP_LABEL(.L_80109A00, 0x80109A00) //this is a jump label
/*80109A00 00106800*/ PPC::Runtime::ASM::cmpwi(context->r3, 0x0);
/*80109A04 00106804*/ PPC::Runtime::ASM::beq(.L_80109A10);
/*80109A08 00106808*/ PPC::Runtime::ASM::mr(context->r3, context->r28);
/*80109A0C 0010680C*/ PPC::Runtime::ASM::bl(fn_HSD_JObjSetupMatrixSub);
RUNTIME_PPC_JUMP_LABEL(.L_80109A10, 0x80109A10) //this is a jump label
/*80109A10 00106810*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x130, context->r31));
/*80109A14 00106814*/ PPC::Runtime::ASM::addi(context->r5, context->r1, 0x14);
/*80109A18 00106818*/ PPC::Runtime::ASM::li(context->r4, 0x0);
/*80109A1C 0010681C*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r3));
/*80109A20 00106820*/ PPC::Runtime::ASM::bl(fn_JObj_GetWorldPosition);
/*80109A24 00106824*/ PPC::Runtime::ASM::lfs(context->f2, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x4, context->r30));
/*80109A28 00106828*/ PPC::Runtime::ASM::lfs(context->f1, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x18, context->r1));
/*80109A2C 0010682C*/ PPC::Runtime::ASM::lfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x58, context->r28));
/*80109A30 00106830*/ PPC::Runtime::ASM::fsubs(context->f1, context->f2, context->f1);
/*80109A34 00106834*/ PPC::Runtime::ASM::fabs(context->f1, context->f1);
/*80109A38 00106838*/ PPC::Runtime::ASM::fcmpo(cr0, context->f1, context->f0);
/*80109A3C 0010683C*/ PPC::Runtime::ASM::ble(.L_80109AB8);
/*80109A40 00106840*/ PPC::Runtime::ASM::lwz(context->r29, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x2c, context->r29));
/*80109A44 00106844*/ PPC::Runtime::ASM::lwz(context->r4, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r29));
/*80109A48 00106848*/ PPC::Runtime::ASM::mr(context->r3, context->r29);
/*80109A4C 0010684C*/ PPC::Runtime::ASM::lwz(context->r4, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r4));
/*80109A50 00106850*/ PPC::Runtime::ASM::lwz(context->r4, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r4));
/*80109A54 00106854*/ PPC::Runtime::ASM::bl(fn_800F57EC);
/*80109A58 00106858*/ PPC::Runtime::ASM::fmr(context->f31, context->f1);
/*80109A5C 0010685C*/ PPC::Runtime::ASM::lfs(context->f1, STRUCT_FLOAT_COUNT_1805DFA98 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*80109A60 00106860*/ PPC::Runtime::ASM::lfs(context->f2, STRUCT_FLOAT_COUNT_1805DFA9C @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*80109A64 00106864*/ PPC::Runtime::ASM::mr(context->r3, context->r29);
/*80109A68 00106868*/ PPC::Runtime::ASM::fmr(context->f3, context->f1);
/*80109A6C 0010686C*/ PPC::Runtime::ASM::li(context->r4, 0x1);
/*80109A70 00106870*/ PPC::Runtime::ASM::li(context->r5, -0x1);
/*80109A74 00106874*/ PPC::Runtime::ASM::li(context->r6, -0x1);
/*80109A78 00106878*/ PPC::Runtime::ASM::li(context->r7, 0x4);
/*80109A7C 0010687C*/ PPC::Runtime::ASM::bl(fn_killWhispy);
/*80109A80 00106880*/ PPC::Runtime::ASM::lwz(context->r5, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r29));
/*80109A84 00106884*/ PPC::Runtime::ASM::fmr(context->f2, context->f31);
/*80109A88 00106888*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r29));
/*80109A8C 0010688C*/ PPC::Runtime::ASM::li(context->r4, 0x2);
/*80109A90 00106890*/ PPC::Runtime::ASM::lwz(context->r30, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r5));
/*80109A94 00106894*/ PPC::Runtime::ASM::li(context->r6, 0x0);
/*80109A98 00106898*/ PPC::Runtime::ASM::lfs(context->f1, STRUCT_FLOAT_COUNT_1805DFA98 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*80109A9C 0010689C*/ PPC::Runtime::ASM::lwz(context->r5, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r30));
/*80109AA0 001068A0*/ PPC::Runtime::ASM::li(context->r7, 0x1);
/*80109AA4 001068A4*/ PPC::Runtime::ASM::bl(fn_800F579C);
/*80109AA8 001068A8*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r29));
/*80109AAC 001068AC*/ PPC::Runtime::ASM::lwz(context->r4, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r30));
/*80109AB0 001068B0*/ PPC::Runtime::ASM::bl(fn_800F5C68);
/*80109AB4 001068B4*/ PPC::Runtime::ASM::b(.L_80109C5C);
RUNTIME_PPC_JUMP_LABEL(.L_80109AB8, 0x80109AB8) //this is a jump label
/*80109AB8 001068B8*/ PPC::Runtime::ASM::lwz(context->r29, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x2c, context->r29));
/*80109ABC 001068BC*/ PPC::Runtime::ASM::lwz(context->r4, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r29));
/*80109AC0 001068C0*/ PPC::Runtime::ASM::mr(context->r3, context->r29);
/*80109AC4 001068C4*/ PPC::Runtime::ASM::lwz(context->r4, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r4));
/*80109AC8 001068C8*/ PPC::Runtime::ASM::lwz(context->r4, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r4));
/*80109ACC 001068CC*/ PPC::Runtime::ASM::bl(fn_800F57EC);
/*80109AD0 001068D0*/ PPC::Runtime::ASM::fmr(context->f31, context->f1);
/*80109AD4 001068D4*/ PPC::Runtime::ASM::lfs(context->f1, STRUCT_FLOAT_COUNT_1805DFA98 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*80109AD8 001068D8*/ PPC::Runtime::ASM::lfs(context->f2, STRUCT_FLOAT_COUNT_1805DFA9C @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*80109ADC 001068DC*/ PPC::Runtime::ASM::mr(context->r3, context->r29);
/*80109AE0 001068E0*/ PPC::Runtime::ASM::fmr(context->f3, context->f1);
/*80109AE4 001068E4*/ PPC::Runtime::ASM::li(context->r4, 0x2);
/*80109AE8 001068E8*/ PPC::Runtime::ASM::li(context->r5, 0x1);
/*80109AEC 001068EC*/ PPC::Runtime::ASM::li(context->r6, -0x1);
/*80109AF0 001068F0*/ PPC::Runtime::ASM::li(context->r7, 0x0);
/*80109AF4 001068F4*/ PPC::Runtime::ASM::bl(fn_killWhispy);
/*80109AF8 001068F8*/ PPC::Runtime::ASM::lwz(context->r5, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r29));
/*80109AFC 001068FC*/ PPC::Runtime::ASM::fmr(context->f2, context->f31);
/*80109B00 00106900*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r29));
/*80109B04 00106904*/ PPC::Runtime::ASM::li(context->r4, 0x2);
/*80109B08 00106908*/ PPC::Runtime::ASM::lwz(context->r30, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r5));
/*80109B0C 0010690C*/ PPC::Runtime::ASM::li(context->r6, 0x0);
/*80109B10 00106910*/ PPC::Runtime::ASM::lfs(context->f1, STRUCT_FLOAT_COUNT_1805DFA98 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*80109B14 00106914*/ PPC::Runtime::ASM::lwz(context->r5, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r30));
/*80109B18 00106918*/ PPC::Runtime::ASM::li(context->r7, 0x1);
/*80109B1C 0010691C*/ PPC::Runtime::ASM::bl(fn_800F579C);
/*80109B20 00106920*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r29));
/*80109B24 00106924*/ PPC::Runtime::ASM::lwz(context->r4, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r30));
/*80109B28 00106928*/ PPC::Runtime::ASM::bl(fn_800F5C68);
/*80109B2C 0010692C*/ PPC::Runtime::ASM::li(context->r0, 0x0);
/*80109B30 00106930*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x134, context->r29));
/*80109B34 00106934*/ PPC::Runtime::ASM::b(.L_80109C5C);
RUNTIME_PPC_JUMP_LABEL(.L_80109B38, 0x80109B38) //this is a jump label
/*80109B38 00106938*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r31));
/*80109B3C 0010693C*/ PPC::Runtime::ASM::lwz(context->r4, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x64, context->r31));
/*80109B40 00106940*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r3));
/*80109B44 00106944*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x4, context->r3));
/*80109B48 00106948*/ PPC::Runtime::ASM::slwi(context->r0, context->r0, 3);
/*80109B4C 0010694C*/ PPC::Runtime::ASM::lwzx(context->r28, context->r4, context->r0);
/*80109B50 00106950*/ PPC::Runtime::ASM::cmplwi(context->r28, 0x0);
/*80109B54 00106954*/ PPC::Runtime::ASM::bne(.L_80109B68);
/*80109B58 00106958*/ PPC::Runtime::ASM::li(context->r3, lbl_805D6308 @ Get_MemoryOffset_SDA21);
/*80109B5C 0010695C*/ PPC::Runtime::ASM::li(context->r4, 0x47c);
/*80109B60 00106960*/ PPC::Runtime::ASM::li(context->r5, lbl_805D6310 @ Get_MemoryOffset_SDA21);
/*80109B64 00106964*/ PPC::Runtime::ASM::bl(fn___assert);
RUNTIME_PPC_JUMP_LABEL(.L_80109B68, 0x80109B68) //this is a jump label
/*80109B68 00106968*/ PPC::Runtime::ASM::cmplwi(context->r28, 0x0);
/*80109B6C 0010696C*/ PPC::Runtime::ASM::beq(.L_80109BB0);
/*80109B70 00106970*/ PPC::Runtime::ASM::bne(.L_80109B84);
/*80109B74 00106974*/ PPC::Runtime::ASM::li(context->r3, lbl_805D6308 @ Get_MemoryOffset_SDA21);
/*80109B78 00106978*/ PPC::Runtime::ASM::li(context->r4, 0x25d);
/*80109B7C 0010697C*/ PPC::Runtime::ASM::li(context->r5, lbl_805D6310 @ Get_MemoryOffset_SDA21);
/*80109B80 00106980*/ PPC::Runtime::ASM::bl(fn___assert);
RUNTIME_PPC_JUMP_LABEL(.L_80109B84, 0x80109B84) //this is a jump label
/*80109B84 00106984*/ PPC::Runtime::ASM::lwz(context->r4, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r28));
/*80109B88 00106988*/ PPC::Runtime::ASM::li(context->r3, 0x0);
/*80109B8C 0010698C*/ PPC::Runtime::ASM::rlwinm.(context->r0, context->r4, 0, 8, 8);
/*80109B90 00106990*/ PPC::Runtime::ASM::bne(.L_80109BA0);
/*80109B94 00106994*/ PPC::Runtime::ASM::rlwinm.(context->r0, context->r4, 0, 25, 25);
/*80109B98 00106998*/ PPC::Runtime::ASM::beq(.L_80109BA0);
/*80109B9C 0010699C*/ PPC::Runtime::ASM::li(context->r3, 0x1);
RUNTIME_PPC_JUMP_LABEL(.L_80109BA0, 0x80109BA0) //this is a jump label
/*80109BA0 001069A0*/ PPC::Runtime::ASM::cmpwi(context->r3, 0x0);
/*80109BA4 001069A4*/ PPC::Runtime::ASM::beq(.L_80109BB0);
/*80109BA8 001069A8*/ PPC::Runtime::ASM::mr(context->r3, context->r28);
/*80109BAC 001069AC*/ PPC::Runtime::ASM::bl(fn_HSD_JObjSetupMatrixSub);
RUNTIME_PPC_JUMP_LABEL(.L_80109BB0, 0x80109BB0) //this is a jump label
/*80109BB0 001069B0*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x130, context->r31));
/*80109BB4 001069B4*/ PPC::Runtime::ASM::addi(context->r5, context->r1, 0x8);
/*80109BB8 001069B8*/ PPC::Runtime::ASM::li(context->r4, 0x0);
/*80109BBC 001069BC*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r3));
/*80109BC0 001069C0*/ PPC::Runtime::ASM::bl(fn_JObj_GetWorldPosition);
/*80109BC4 001069C4*/ PPC::Runtime::ASM::lfs(context->f2, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x4, context->r30));
/*80109BC8 001069C8*/ PPC::Runtime::ASM::lfs(context->f1, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r1));
/*80109BCC 001069CC*/ PPC::Runtime::ASM::lfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x58, context->r28));
/*80109BD0 001069D0*/ PPC::Runtime::ASM::fsubs(context->f1, context->f2, context->f1);
/*80109BD4 001069D4*/ PPC::Runtime::ASM::fabs(context->f1, context->f1);
/*80109BD8 001069D8*/ PPC::Runtime::ASM::fcmpo(cr0, context->f1, context->f0);
/*80109BDC 001069DC*/ PPC::Runtime::ASM::bgt(.L_80109C5C);
/*80109BE0 001069E0*/ PPC::Runtime::ASM::lwz(context->r29, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x2c, context->r29));
/*80109BE4 001069E4*/ PPC::Runtime::ASM::lwz(context->r4, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r29));
/*80109BE8 001069E8*/ PPC::Runtime::ASM::mr(context->r3, context->r29);
/*80109BEC 001069EC*/ PPC::Runtime::ASM::lwz(context->r4, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r4));
/*80109BF0 001069F0*/ PPC::Runtime::ASM::lwz(context->r4, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r4));
/*80109BF4 001069F4*/ PPC::Runtime::ASM::bl(fn_800F57EC);
/*80109BF8 001069F8*/ PPC::Runtime::ASM::fmr(context->f31, context->f1);
/*80109BFC 001069FC*/ PPC::Runtime::ASM::lfs(context->f1, STRUCT_FLOAT_COUNT_1805DFA98 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*80109C00 00106A00*/ PPC::Runtime::ASM::lfs(context->f2, STRUCT_FLOAT_COUNT_1805DFA9C @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*80109C04 00106A04*/ PPC::Runtime::ASM::mr(context->r3, context->r29);
/*80109C08 00106A08*/ PPC::Runtime::ASM::fmr(context->f3, context->f1);
/*80109C0C 00106A0C*/ PPC::Runtime::ASM::li(context->r4, 0x2);
/*80109C10 00106A10*/ PPC::Runtime::ASM::li(context->r5, 0x1);
/*80109C14 00106A14*/ PPC::Runtime::ASM::li(context->r6, -0x1);
/*80109C18 00106A18*/ PPC::Runtime::ASM::li(context->r7, 0x0);
/*80109C1C 00106A1C*/ PPC::Runtime::ASM::bl(fn_killWhispy);
/*80109C20 00106A20*/ PPC::Runtime::ASM::lwz(context->r5, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r29));
/*80109C24 00106A24*/ PPC::Runtime::ASM::fmr(context->f2, context->f31);
/*80109C28 00106A28*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r29));
/*80109C2C 00106A2C*/ PPC::Runtime::ASM::li(context->r4, 0x2);
/*80109C30 00106A30*/ PPC::Runtime::ASM::lwz(context->r30, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r5));
/*80109C34 00106A34*/ PPC::Runtime::ASM::li(context->r6, 0x0);
/*80109C38 00106A38*/ PPC::Runtime::ASM::lfs(context->f1, STRUCT_FLOAT_COUNT_1805DFA98 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*80109C3C 00106A3C*/ PPC::Runtime::ASM::lwz(context->r5, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r30));
/*80109C40 00106A40*/ PPC::Runtime::ASM::li(context->r7, 0x1);
/*80109C44 00106A44*/ PPC::Runtime::ASM::bl(fn_800F579C);
/*80109C48 00106A48*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r29));
/*80109C4C 00106A4C*/ PPC::Runtime::ASM::lwz(context->r4, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r30));
/*80109C50 00106A50*/ PPC::Runtime::ASM::bl(fn_800F5C68);
/*80109C54 00106A54*/ PPC::Runtime::ASM::li(context->r0, 0x0);
/*80109C58 00106A58*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x134, context->r29));
RUNTIME_PPC_JUMP_LABEL(.L_80109C5C, 0x80109C5C) //this is a jump label
/*80109C5C 00106A5C*/ PPC::Runtime::ASM::psq_l(context->f31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x38, context->r1)0, context->qr0);
/*80109C60 00106A60*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x44, context->r1));
/*80109C64 00106A64*/ PPC::Runtime::ASM::lfd(context->f31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x30, context->r1));
/*80109C68 00106A68*/ PPC::Runtime::ASM::lwz(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x2c, context->r1));
/*80109C6C 00106A6C*/ PPC::Runtime::ASM::lwz(context->r30, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x28, context->r1));
/*80109C70 00106A70*/ PPC::Runtime::ASM::lwz(context->r29, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x24, context->r1));
/*80109C74 00106A74*/ PPC::Runtime::ASM::lwz(context->r28, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x20, context->r1));
/*80109C78 00106A78*/ PPC::Runtime::ASM::mtlr(context->r0);
/*80109C7C 00106A7C*/ PPC::Runtime::ASM::addi(context->r1, context->r1, 0x40);
/*80109C80 00106A80*/ PPC::Runtime::ASM::blr();
}